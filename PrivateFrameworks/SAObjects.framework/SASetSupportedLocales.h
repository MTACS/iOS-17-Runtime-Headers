
@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *locales;

+ (id)setSupportedLocales;
+ (id)setSupportedLocalesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locales;
- (bool)requiresResponse;
- (void)setLocales:(id)arg1;

@end
