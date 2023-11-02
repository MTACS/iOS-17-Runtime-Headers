
@protocol TUNeighborhoodActivityConduitDelegate <NSObject>

@required

- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 splitSessionEnded:(TUNearbyDeviceHandle *)arg2;
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 splitSessionStarted:(TUNearbyDeviceHandle *)arg2;
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 tvDeviceAppeared:(TUNearbyDeviceHandle *)arg2;
- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 tvDeviceDisappeared:(TUNearbyDeviceHandle *)arg2;

@optional

- (void)neighborhoodActivityConduit:(TUNeighborhoodActivityConduit *)arg1 suggestionUpdated:(TUNearbySuggestion *)arg2;

@end
