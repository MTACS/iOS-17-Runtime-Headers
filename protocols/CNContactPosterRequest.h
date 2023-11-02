
@protocol CNContactPosterRequest <NSObject>

@required

- (NSArray *)contactIdentifiers;
- (NSPersistentStoreRequest *)persistentStoreRequest;
- (void)setContactIdentifiers:(NSArray *)arg1;

@end
