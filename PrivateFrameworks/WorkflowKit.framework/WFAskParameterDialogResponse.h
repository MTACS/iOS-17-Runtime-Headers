
@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding> {
    <WFPropertyListObject> * _serializedParameterState;
}

@property (nonatomic, readonly) <WFPropertyListObject> *serializedParameterState;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedParameterState:(id)arg1 cancelled:(bool)arg2;
- (id)serializedParameterState;

@end
