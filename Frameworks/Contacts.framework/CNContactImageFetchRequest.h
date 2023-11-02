
@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest> {
    NSArray * _contactIdentifiers;
}

@property (nonatomic, retain) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (readonly) Class superclass;

+ (id)predicateForImagesMatchingContactIdentifiers:(id)arg1;
+ (id)recentImagesRequestForContactIdenfitiers:(id)arg1;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)initWithContactIdentifiers:(id)arg1;
- (id)persistentStoreRequest;
- (void)setContactIdentifiers:(id)arg1;

@end
