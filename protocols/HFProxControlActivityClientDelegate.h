
@protocol HFProxControlActivityClientDelegate <NSObject>

@optional

- (void)didUpdateActivities:(NSOrderedSet *)arg1 forProxControlID:(NSObject *)arg2 disambiguationContext:(PCDisambiguationContext *)arg3;

@end
