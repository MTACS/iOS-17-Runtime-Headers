
@interface WFNumberParameterState : NSObject <WFParameterState> {
    NSNumber * _number;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *number;
@property (readonly) Class superclass;

+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithNumber:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)number;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;

@end
