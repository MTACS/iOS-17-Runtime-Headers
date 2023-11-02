
@interface MEMessageActionDecision : NSObject <NSSecureCoding> {
    NSArray * _actions;
    bool  _invokeAgainWithBody;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) bool invokeAgainWithBody;

+ (id)decisionApplyingAction:(id)arg1;
+ (id)decisionApplyingActions:(id)arg1;
+ (id)invokeAgainWithBody;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActions:(id)arg1 invokeAgainWithBody:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)invokeAgainWithBody;
- (bool)isEqual:(id)arg1;

@end
