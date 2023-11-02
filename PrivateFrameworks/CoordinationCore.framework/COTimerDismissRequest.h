
@interface COTimerDismissRequest : COMeshRequest {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimerIdentifier:(id)arg1;

@end
