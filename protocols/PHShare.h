
@protocol PHShare <NSObject>

@required

- (NSDate *)creationDate;
- (NSDate *)expiryDate;
- (short)publicPermission;
- (short)publishState;
- (NSURL *)shareURL;
- (unsigned short)status;
- (unsigned short)trashedState;

@end
