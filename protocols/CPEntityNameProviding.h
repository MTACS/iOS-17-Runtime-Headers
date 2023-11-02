
@protocol CPEntityNameProviding <NSObject>

@required

- (NSString *)name;
- (void)setName:(NSString *)arg1;

@optional

- (NSString *)informativeText;
- (void)setInformativeText:(NSString *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (NSString *)subtitle;

@end
