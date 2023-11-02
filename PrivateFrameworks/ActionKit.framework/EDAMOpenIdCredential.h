
@interface EDAMOpenIdCredential : FATObject {
    NSNumber * _serviceProvider;
    NSString * _tokenPayload;
}

@property (nonatomic, retain) NSNumber *serviceProvider;
@property (nonatomic, retain) NSString *tokenPayload;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:(id)arg1;
- (void)setTokenPayload:(id)arg1;
- (id)tokenPayload;

@end
