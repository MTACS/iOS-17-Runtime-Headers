
@protocol FIIntervalController

@required

- (bool)allSlicesFinalized;
- (bool)intervalComplete;
- (NSDate *)intervalEndDate;

@end
