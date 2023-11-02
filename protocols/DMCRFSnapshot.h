
@protocol DMCRFSnapshot <NSObject>

@required

- (NSDate *)date;
- (NSDate *)dateCreated;
- (NSDate *)dateModified;
- (NSString *)deviceName;
- (<DMCRFSnapshotIdentifier> *)identifier;

@end
