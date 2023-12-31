
@interface TRErrorResponse : TRResponseMessage {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)setError:(id)arg1;

@end
