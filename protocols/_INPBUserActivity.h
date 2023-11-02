
@protocol _INPBUserActivity <NSObject>

@required

- (NSData *)data;
- (bool)hasData;
- (bool)hasTitle;
- (bool)hasUri;
- (void)setData:(NSData *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUri:(NSString *)arg1;
- (NSString *)title;
- (NSString *)uri;

@end
