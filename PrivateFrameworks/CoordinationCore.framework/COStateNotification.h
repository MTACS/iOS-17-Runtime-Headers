
@interface COStateNotification : COMeshNotification {
    NSDictionary * _state;
}

@property (nonatomic, readonly, copy) NSDictionary *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (id)state;

@end
