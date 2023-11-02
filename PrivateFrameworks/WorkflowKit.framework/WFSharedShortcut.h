
@interface WFSharedShortcut : NSObject <WFCloudKitItem> {
    NSDate * _createdAt;
    NSString * _createdBy;
    NSNumber * _iconColor;
    WFFileRepresentation * _iconFile;
    NSNumber * _iconGlyph;
    CKRecordID * _identifier;
    NSString * _name;
    WFFileRepresentation * _shortcutFile;
    WFFileRepresentation * _signedShortcutFile;
    NSString * _signingStatus;
    WFWorkflowRecord * _workflowRecord;
}

@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSString *createdBy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowIcon *icon;
@property (nonatomic, retain) NSNumber *iconColor;
@property (nonatomic, retain) WFFileRepresentation *iconFile;
@property (nonatomic, retain) NSNumber *iconGlyph;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (nonatomic, retain) WFFileRepresentation *shortcutFile;
@property (nonatomic, retain) WFFileRepresentation *signedShortcutFile;
@property (nonatomic, copy) NSString *signingStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFWorkflowRecord *workflowRecord;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)createdAt;
- (id)createdBy;
- (id)ensureFileAssets;
- (id)icon;
- (id)iconColor;
- (id)iconFile;
- (id)iconGlyph;
- (id)identifier;
- (id)name;
- (id)propertiesForEventLogging;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (void)setIcon:(id)arg1;
- (void)setIconColor:(id)arg1;
- (void)setIconFile:(id)arg1;
- (void)setIconGlyph:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShortcutFile:(id)arg1;
- (void)setSignedShortcutFile:(id)arg1;
- (void)setSigningStatus:(id)arg1;
- (void)setWorkflowRecord:(id)arg1;
- (id)sharingURL;
- (id)shortcutFile;
- (id)signedShortcutFile;
- (id)signingStatus;
- (id)workflowRecord;

@end
