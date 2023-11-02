
@interface COAlarmSnoozeRequest : COMeshRequest {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAlarmIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
