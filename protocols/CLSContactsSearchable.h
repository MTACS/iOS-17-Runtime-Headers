
@protocol CLSContactsSearchable

@required

- (NSString *)displayName;

@optional

- (NSString *)emailAddress;
- (NSString *)groupIdentifier;
- (NSPersonNameComponents *)nameComponents;

@end
