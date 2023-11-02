
@interface DIUserDataParams : DIBaseParams {
    NSDictionary * _userDict;
}

@property (nonatomic, retain) NSDictionary *userDict;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)embedWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)retrieveWithError:(id*)arg1;
- (void)setUserDict:(id)arg1;
- (id)userDict;

@end
