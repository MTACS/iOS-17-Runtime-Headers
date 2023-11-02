
@protocol DDUIDevice <NSObject>

@required

- (NSString *)accountIdentifier;
- (unsigned int)deviceType;
- (NSString *)identifier;
- (bool)isMine;
- (NSString *)model;
- (NSString *)name;

@end
