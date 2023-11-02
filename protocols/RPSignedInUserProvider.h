
@protocol RPSignedInUserProvider <NSObject>

@required

- (unsigned int)signedInUserID;
- (bool)supportsMultipleUsers;

@end
