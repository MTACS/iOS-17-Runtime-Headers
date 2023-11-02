
@interface COMTPerformActionRequest : COMessageChannelRequest {
    NSArray * _actions;
}

@property (nonatomic, readonly, copy) NSArray *actions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActions:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
