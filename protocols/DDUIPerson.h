
@protocol DDUIPerson <NSObject>

@required

- (NSString *)accountIdentifier;
- (NSString *)identifier;
- (NSString *)name;
- (RPRemoteDisplayPerson *)rapportPerson;

@end
