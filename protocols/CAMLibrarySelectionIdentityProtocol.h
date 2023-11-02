
@protocol CAMLibrarySelectionIdentityProtocol <NSCopying>

@required

- (NSArray *)contactIdentifiers;
- (NSString *)emailAddress;
- (NSString *)phoneNumber;

@end
