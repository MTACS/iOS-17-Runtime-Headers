
@interface WFInputDateDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding> {
    NSDate * _inputtedDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *inputtedDate;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputtedDate:(id)arg1 cancelled:(bool)arg2;
- (id)inputtedDate;

@end
