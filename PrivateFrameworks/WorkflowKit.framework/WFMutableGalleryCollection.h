
@interface WFMutableGalleryCollection : WFGalleryCollection {
    CKRecordID * base;
    NSString * collectionDescription;
    CKRecordID * identifier;
    NSString * language;
    long long  minVersion;
    NSDate * modifiedAt;
    NSString * name;
    NSString * persistentIdentifier;
    NSArray * supportedIdioms;
    NSArray * workflows;
}

@property (nonatomic, retain) CKRecordID *base;
@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) CKRecordID *identifier;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) long long minVersion;
@property (nonatomic, retain) NSDate *modifiedAt;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, copy) NSArray *supportedIdioms;
@property (nonatomic, copy) NSArray *workflows;

- (void).cxx_destruct;
- (id)base;
- (id)collectionDescription;
- (id)identifier;
- (id)language;
- (long long)minVersion;
- (id)modifiedAt;
- (id)name;
- (id)persistentIdentifier;
- (void)setBase:(id)arg1;
- (void)setCollectionDescription:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMinVersion:(long long)arg1;
- (void)setModifiedAt:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setSupportedIdioms:(id)arg1;
- (void)setWorkflows:(id)arg1;
- (id)supportedIdioms;
- (id)workflows;

@end
