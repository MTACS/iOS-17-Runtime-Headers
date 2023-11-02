
@interface WFMutableGalleryBanner : WFGalleryBanner {
    CKRecordID * base;
    CKRecordID * detailPage;
    CKRecordID * identifier;
    NSString * language;
    NSString * name;
    NSString * persistentIdentifier;
    NSString * subtitle;
    NSArray * supportedIdioms;
}

@property (nonatomic, retain) CKRecordID *base;
@property (nonatomic, retain) CKRecordID *detailPage;
@property (nonatomic, copy) CKRecordID *identifier;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *supportedIdioms;

- (void).cxx_destruct;
- (id)base;
- (id)detailPage;
- (id)identifier;
- (id)language;
- (id)name;
- (id)persistentIdentifier;
- (void)setBase:(id)arg1;
- (void)setDetailPage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupportedIdioms:(id)arg1;
- (id)subtitle;
- (id)supportedIdioms;

@end
