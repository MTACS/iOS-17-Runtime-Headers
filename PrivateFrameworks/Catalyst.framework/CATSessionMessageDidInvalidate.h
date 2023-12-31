
@interface CATSessionMessageDidInvalidate : CATSessionMessage {
    NSError * _error;
}

@property (nonatomic, copy) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (void)setError:(id)arg1;

@end
