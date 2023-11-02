
@protocol PEPhotoKitMediaDestinationDelegate <NSObject>

@required

- (void)mediaDestination:(PEPhotoKitMediaDestination *)arg1 didCompleteSaveRequest:(PESaveRequest *)arg2;
- (void)mediaDestination:(PEPhotoKitMediaDestination *)arg1 willBeginSaveRequest:(PESaveRequest *)arg2;

@end
