
@interface DMFEchoResultObject : CATTaskResultObject {
    NSString * _echo;
    NSString * _resultStatus;
}

@property (nonatomic, copy) NSString *echo;
@property (nonatomic, copy) NSString *resultStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)echo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resultStatus;
- (void)setEcho:(id)arg1;
- (void)setResultStatus:(id)arg1;

@end
