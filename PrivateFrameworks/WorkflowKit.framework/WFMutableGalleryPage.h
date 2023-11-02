
@interface WFMutableGalleryPage : WFGalleryPage {
    NSArray * banners;
    CKRecordID * base;
    NSArray * collections;
    NSArray * donations;
    NSArray * donationsGroupedByApp;
    CKRecordID * identifier;
    NSNumber * isRoot;
    NSString * language;
    NSNumber * minVersion;
    NSString * name;
    NSString * persistentIdentifier;
    NSArray * routines;
}

@property (nonatomic, copy) NSArray *banners;
@property (nonatomic, retain) CKRecordID *base;
@property (nonatomic, copy) NSArray *collections;
@property (nonatomic, copy) NSArray *donations;
@property (nonatomic, copy) NSArray *donationsGroupedByApp;
@property (nonatomic, copy) CKRecordID *identifier;
@property (nonatomic, copy) NSNumber *isRoot;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSNumber *minVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, copy) NSArray *routines;

- (void).cxx_destruct;
- (id)banners;
- (id)base;
- (id)collections;
- (id)donations;
- (id)donationsGroupedByApp;
- (id)identifier;
- (id)isRoot;
- (id)language;
- (id)minVersion;
- (id)name;
- (id)persistentIdentifier;
- (id)routines;
- (void)setBanners:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setCollections:(id)arg1;
- (void)setDonations:(id)arg1;
- (void)setDonationsGroupedByApp:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsRoot:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMinVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setRoutines:(id)arg1;

@end
