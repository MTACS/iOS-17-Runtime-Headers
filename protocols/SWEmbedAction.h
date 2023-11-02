
@protocol SWEmbedAction <NSObject>

@required

- (bool)canHandle;
- (NSDictionary *)info;
- (void)perform;
- (unsigned long long)type;

@end
