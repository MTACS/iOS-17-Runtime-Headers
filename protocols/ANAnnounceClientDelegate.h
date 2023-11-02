
@protocol ANAnnounceClientDelegate <NSObject>

@optional

- (void)connectionInterrupted;
- (void)connectionInvalidated;

@end
