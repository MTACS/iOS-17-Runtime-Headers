
@protocol AFClockItem <NSObject>

@required

- (NSDate *)dismissedDate;
- (NSDate *)firedDate;
- (bool)isFiring;
- (NSUUID *)itemID;
- (NSURL *)itemURL;
- (NSDate *)lastModifiedDate;

@end
