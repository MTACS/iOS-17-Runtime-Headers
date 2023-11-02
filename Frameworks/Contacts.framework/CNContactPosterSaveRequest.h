
@interface CNContactPosterSaveRequest : NSObject <CNContactPosterRequest> {
    NSString * _attributeName;
    NSArray * _contactIdentifiers;
    long long  _operationType;
    NSArray * _posters;
}

@property (nonatomic, readonly) NSString *attributeName;
@property (nonatomic, retain) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long operationType;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (nonatomic, readonly) NSArray *posters;
@property (readonly) Class superclass;

+ (id)saveRequestToCreatePoster:(id)arg1 forContactIdentifier:(id)arg2;
+ (id)saveRequestToCreatePosters:(id)arg1 forContactIdentifier:(id)arg2;
+ (id)saveRequestToDeletePosterForIdentifier:(id)arg1;
+ (id)saveRequestToDeletePosterForIdentifiers:(id)arg1;
+ (id)saveRequestToDeletePostersForContactIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)attributeName;
- (id)contactIdentifiers;
- (id)createStoreRequest;
- (id)deleteStoreRequest;
- (id)initWithContactPosters:(id)arg1 contactIdentifiers:(id)arg2 attributeName:(id)arg3 operationType:(long long)arg4;
- (long long)operationType;
- (id)persistentStoreRequest;
- (id)posters;
- (void)setContactIdentifiers:(id)arg1;

@end
