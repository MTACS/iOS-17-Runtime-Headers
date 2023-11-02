
@protocol WFVariableSerialization <NSObject>

@required

- (id)initWithSerializedRepresentation:(id <WFPropertyListObject>)arg1 variableProvider:(id <WFVariableProvider>)arg2 parameter:(WFParameter *)arg3;
- (<WFPropertyListObject> *)serializedRepresentation;

@end
