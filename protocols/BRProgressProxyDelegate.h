
@protocol BRProgressProxyDelegate <NSObject>

@optional

- (NSString *)progressProxy:(BRProgressProxy *)arg1 localizedDescriptionForProgress:(NSProgress *)arg2;
- (bool)progressProxy:(BRProgressProxy *)arg1 shouldProxyProgress:(NSProgress *)arg2;

@end
