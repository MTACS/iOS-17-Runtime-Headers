
@protocol MRExpanseManagerObserver <NSObject>

@optional

- (void)expanseManagerDidJoinExpanseSession:(MRExpanseManager *)arg1;
- (void)expanseManagerDidLeaveExpanseSession:(MRExpanseManager *)arg1;
- (void)expanseManagerTelevisionDidJoinSession:(MRExpanseManager *)arg1;
- (void)expanseManagerTelevisionDidLeaveSession:(MRExpanseManager *)arg1;

@end
