
@protocol VCSyncDataEndpoint <NSObject>

@required

- (NSSet *)syncDataHandlers;

@end
