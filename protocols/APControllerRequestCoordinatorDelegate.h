
@protocol APControllerRequestCoordinatorDelegate <NSObject>

@required

- (void)connectionSevered;
- (void)contentResponses:(NSArray *)arg1;
- (NSUUID *)requesterID;

@end
