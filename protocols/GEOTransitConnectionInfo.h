
@protocol GEOTransitConnectionInfo <NSObject>

@required

- (GEOMapItemIdentifier *)itemIdentifier;
- (NSArray *)labelItems;
- (unsigned long long)muid;
- (NSString *)name;
- (int)providerID;
- (NSURL *)urlToOpen;

@end
