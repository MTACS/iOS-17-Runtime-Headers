
@protocol IKDOMFeature <NSObject>

@required

+ (IKJSObject *)makeFeatureJSObjectForFeature:(id <IKDOMFeature>)arg1;

- (IKAppContext *)appContext;
- (NSString *)featureName;
- (id)initWithDOMNode:(IKDOMNode *)arg1 featureName:(NSString *)arg2;

@optional

- (void)migrateToViewElement:(IKViewElement *)arg1;

@end
