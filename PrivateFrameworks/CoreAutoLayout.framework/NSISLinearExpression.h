
@interface NSISLinearExpression : NSObject <NSFastEnumeration> {
    NSISEngine * engine;
    struct { 
        unsigned short inline_capacity; 
        unsigned int var_count; 
        double constant; 
        union { 
            struct { 
                id stored_extern_marker; 
                struct { /* ? */ } *slab; 
                unsigned long long capacity; 
            } extern_data; 
            struct { 
                unsigned long long aligner; 
            } inline_slab; 
            unsigned char padding[48]; 
        } data; 
    }  linExp;
}

@property double constant;
@property (readonly) NSISEngine *engine;

+ (id)acquireFromPoolForUseCase:(long long)arg1;
+ (id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2;
+ (void)initialize;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2;

- (void)addExpression:(id)arg1 times:(double)arg2;
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (double)coefficientForVariable:(id)arg1;
- (double)constant;
- (id)copyContentsAndReturnToPool;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)engine;
- (void)enumerateVariables:(id /* block */)arg1;
- (void)enumerateVariablesAndCoefficients:(id /* block */)arg1;
- (bool)enumerateVariablesAndCoefficientsUntil:(id /* block */)arg1;
- (unsigned long long)hash;
- (double)incrementConstant:(double)arg1;
- (id)init;
- (id)initWithEngine:(id)arg1;
- (bool)isConstant;
- (bool)isEqual:(id)arg1;
- (void)removeVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id /* block */)arg4 processVariableDroppedFromReceiver:(id /* block */)arg5;
- (void)returnToPool;
- (void)scaleBy:(double)arg1;
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;
- (void)setConstant:(double)arg1;
- (unsigned long long)variableCount;
- (id)variablesArray;
- (void)verifyInternalIntegrity;

@end
