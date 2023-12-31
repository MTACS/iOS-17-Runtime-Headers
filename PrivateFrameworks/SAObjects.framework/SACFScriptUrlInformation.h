
@interface SACFScriptUrlInformation : SABaseAceObject

@property (nonatomic, copy) NSURL *downloadUrl;
@property (nonatomic, copy) NSDictionary *headerFields;
@property (nonatomic, copy) NSString *requestMethodType;

+ (id)scriptUrlInformation;
+ (id)scriptUrlInformationWithDictionary:(id)arg1 context:(id)arg2;

- (id)downloadUrl;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headerFields;
- (id)requestMethodType;
- (void)setDownloadUrl:(id)arg1;
- (void)setHeaderFields:(id)arg1;
- (void)setRequestMethodType:(id)arg1;

@end
