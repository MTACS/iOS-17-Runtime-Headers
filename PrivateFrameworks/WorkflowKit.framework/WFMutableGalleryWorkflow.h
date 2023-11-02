
@interface WFMutableGalleryWorkflow : WFGalleryWorkflow {
    CKRecordID * base;
    NSDate * createdAt;
    NSArray * hiddenRegions;
    WFFileRepresentation * iconFile;
    CKRecordID * identifier;
    NSString * language;
    NSString * longDescription;
    long long  minVersion;
    NSDate * modifiedAt;
    NSString * name;
    NSString * persistentIdentifier;
    NSNumber * searchable;
    NSString * shortDescription;
    WFFileRepresentation * shortcutFile;
    NSArray * supportedIdioms;
    WFWorkflowRecord * workflowRecord;
}

@property (nonatomic, retain) CKRecordID *base;
@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic, copy) NSArray *hiddenRegions;
@property (nonatomic, retain) WFWorkflowIcon *icon;
@property (nonatomic, retain) WFFileRepresentation *iconFile;
@property (nonatomic, copy) CKRecordID *identifier;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *longDescription;
@property (nonatomic) long long minVersion;
@property (nonatomic, retain) NSDate *modifiedAt;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic, retain) NSNumber *searchable;
@property (nonatomic, copy) NSString *shortDescription;
@property (nonatomic, retain) WFFileRepresentation *shortcutFile;
@property (nonatomic, copy) NSArray *supportedIdioms;
@property (nonatomic, retain) WFWorkflowRecord *workflowRecord;

- (void).cxx_destruct;
- (id)base;
- (id)createdAt;
- (id)hiddenRegions;
- (id)iconFile;
- (id)identifier;
- (id)language;
- (id)longDescription;
- (long long)minVersion;
- (id)modifiedAt;
- (id)name;
- (id)persistentIdentifier;
- (id)searchable;
- (void)setBase:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setHiddenRegions:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconFile:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setMinVersion:(long long)arg1;
- (void)setModifiedAt:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setSearchable:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setShortcutFile:(id)arg1;
- (void)setSupportedIdioms:(id)arg1;
- (void)setWorkflowRecord:(id)arg1;
- (id)shortDescription;
- (id)shortcutFile;
- (id)supportedIdioms;
- (id)workflowRecord;

@end
