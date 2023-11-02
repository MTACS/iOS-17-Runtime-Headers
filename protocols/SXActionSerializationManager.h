
@protocol SXActionSerializationManager <NSObject>

@required

- (void)registerSerializer:(id <SXActionSerializer>)arg1 actionType:(NSString *)arg2;

@end
