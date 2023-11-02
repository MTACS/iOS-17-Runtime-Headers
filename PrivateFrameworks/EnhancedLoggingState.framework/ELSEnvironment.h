
@interface ELSEnvironment : NSObject

+ (id)sharedEnvironment;

- (id)_defaults;
- (id)_toASTServerNumber:(unsigned long long)arg1;
- (unsigned long long)server;
- (void)setServer:(unsigned long long)arg1;

@end
