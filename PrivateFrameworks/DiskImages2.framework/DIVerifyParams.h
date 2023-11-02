
@interface DIVerifyParams : DIBaseParams

@property (nonatomic) bool shouldValidateShadows;

+ (bool)supportsSecureCoding;

- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 shadowURLs:(id)arg2 error:(id*)arg3;
- (void)setShouldValidateShadows:(bool)arg1;
- (bool)shouldValidateShadows;
- (bool)verifyWithError:(id*)arg1;

@end
