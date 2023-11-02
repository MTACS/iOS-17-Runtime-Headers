
@protocol SWScript <NSObject>

@required

- (NSString *)executableScript;
- (NSString *)identifier;
- (bool)queueable;
- (WKUserScript *)userScript;

@end
