
@interface CNContactImageSaveRequest : NSObject <CNContactImageRequest> {
    NSString * _attributeName;
    NSArray * _contactIdentifiers;
    NSArray * _images;
    long long  _operationType;
}

@property (nonatomic, readonly) NSString *attributeName;
@property (nonatomic, retain) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) long long operationType;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (readonly) Class superclass;

+ (id)saveRequestToCreateImage:(id)arg1 forContactIdentifier:(id)arg2;
+ (id)saveRequestToCreateImages:(id)arg1 forContactIdentifier:(id)arg2;
+ (id)saveRequestToDeleteImageForIdentifier:(id)arg1;
+ (id)saveRequestToDeleteImageForIdentifiers:(id)arg1;
+ (id)saveRequestToDeleteImagesForContactIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)attributeName;
- (id)contactIdentifiers;
- (id)createStoreRequest;
- (id)deleteStoreRequest;
- (id)images;
- (id)initWithContactImages:(id)arg1 contactIdentifiers:(id)arg2 attributeName:(id)arg3 operationType:(long long)arg4;
- (long long)operationType;
- (id)persistentStoreRequest;
- (void)setContactIdentifiers:(id)arg1;

@end
