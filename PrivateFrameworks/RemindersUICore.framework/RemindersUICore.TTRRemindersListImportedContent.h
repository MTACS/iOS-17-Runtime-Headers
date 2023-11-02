
@interface RemindersUICore.TTRRemindersListImportedContent : NSObject {
    void copyPasteItem;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  image;
    void notes;
    void title;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
    void userActivity;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)init;

@end
