
@interface WCAFetchResponse : NSObject <NSSecureCoding> {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

+ (id)fetchResponseWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)setError:(id)arg1;

@end
