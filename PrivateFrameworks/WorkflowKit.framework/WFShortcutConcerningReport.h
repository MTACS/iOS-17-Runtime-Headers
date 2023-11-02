
@interface WFShortcutConcerningReport : NSObject <WFCloudKitItem> {
    CKRecordID * _identifier;
    NSString * _reportMessage;
    NSString * _reportReason;
    CKRecordID * _shortcut;
    WFFileRepresentation * _shortcutContent;
    NSString * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (nonatomic, copy) NSString *reportMessage;
@property (nonatomic, copy) NSString *reportReason;
@property (nonatomic, copy) CKRecordID *shortcut;
@property (nonatomic, retain) WFFileRepresentation *shortcutContent;
@property (nonatomic, copy) NSString *status;
@property (readonly) Class superclass;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithReason:(id)arg1 shortcutContent:(id)arg2;
- (id)reportMessage;
- (id)reportReason;
- (void)setReportMessage:(id)arg1;
- (void)setReportReason:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setShortcutContent:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)shortcut;
- (id)shortcutContent;
- (id)status;

@end
