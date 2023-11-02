
@interface CLSArchivedHandoutAttachment : CLSObject <CLSRelationable> {
    NSURL * _URL;
    NSString * _bundleIdentifier;
    NSString * _contentStoreIdentifier;
    NSString * _contextCustomTypeName;
    NSArray * _contextPath;
    bool  _contextSourceIsCatalog;
    NSString * _contextSummary;
    long long  _contextType;
    long long  _displayOrder;
    int  _permissionType;
    int  _shareType;
    NSString * _storeIdentifier;
    double  _timeExpectation;
    NSString * _title;
    int  _type;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSArray *archivedAssets;
@property (nonatomic, readonly, copy) CLSArchivedSurvey *archivedSurvey;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *contentStoreIdentifier;
@property (nonatomic, readonly) NSString *contextCustomTypeName;
@property (nonatomic, readonly) NSArray *contextPath;
@property (nonatomic, readonly) bool contextSourceIsCatalog;
@property (nonatomic, readonly) NSString *contextSummary;
@property (nonatomic, readonly) long long contextType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLSArchivedHandout *parent;
@property (nonatomic, readonly) NSString *parentObjectID;
@property (nonatomic, readonly) int permissionType;
@property (nonatomic, readonly) int shareType;
@property (nonatomic, readonly) NSString *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeExpectation;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_init;
- (id)archivedAssets;
- (id)archivedSurvey;
- (id)assets;
- (id)bundleIdentifier;
- (id)contentStoreIdentifier;
- (id)contextCustomTypeName;
- (id)contextPath;
- (bool)contextSourceIsCatalog;
- (id)contextSummary;
- (long long)contextType;
- (long long)displayOrder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2;
- (int)permissionType;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentStoreIdentifier:(id)arg1;
- (void)setContextCustomTypeName:(id)arg1;
- (void)setContextPath:(id)arg1;
- (void)setContextSourceIsCatalog:(bool)arg1;
- (void)setContextSummary:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setPermissionType:(int)arg1;
- (void)setShareType:(int)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setTimeExpectation:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (int)shareType;
- (id)storeIdentifier;
- (double)timeExpectation;
- (id)title;
- (int)type;

@end
