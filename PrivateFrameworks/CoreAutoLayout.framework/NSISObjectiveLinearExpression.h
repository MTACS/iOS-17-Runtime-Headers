
@interface NSISObjectiveLinearExpression : NSObject {
    struct { 
        struct { /* ? */ } *values; 
        unsigned short count; 
        unsigned short capacity; 
        unsigned int key; 
        unsigned int heap_position; 
    }  _constant;
    NSISEngine * _engine;
    struct { 
        struct { 
            struct { /* ? */ } **values; 
            int count; 
            unsigned int capacity; 
        } heap; 
        struct { /* ? */ } *values; 
        unsigned int count; 
        unsigned int tombstones; 
        unsigned int size; 
        unsigned short grow_shift; 
    }  _priorityMap;
}

- (void)_addVar:(struct { unsigned int x1; })arg1 priority:(double)arg2 times:(double)arg3;
- (id)_initWithEngine:(id)arg1;
- (void)_removeVar:(struct { unsigned int x1; })arg1;
- (void)_replaceVar:(struct { unsigned int x1; })arg1 withExpression:(struct { unsigned short x1; unsigned int x2; double x3; union { struct { id x_1_2_1; struct { /* ? */ } *x_1_2_2; unsigned long long x_1_2_3; } x_4_1_1; struct { unsigned long long x_2_2_1; } x_4_1_2; unsigned char x_4_1_3[48]; } x4; }*)arg2 processVarNewToReceiver:(id /* block */)arg3 processVarDroppedFromReceiver:(id /* block */)arg4;
- (bool)_restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(struct { unsigned int x1; }*)arg1;
- (unsigned long long)_variableCount;
- (void)dealloc;
- (id)description;
- (id)init;

@end
