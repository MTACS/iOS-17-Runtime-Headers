
@interface MADVideoRequest : NSObject <NSSecureCoding> {
    NSError * _error;
    NSArray * _results;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)results;
- (void)setError:(id)arg1;
- (void)setResults:(id)arg1;

@end
