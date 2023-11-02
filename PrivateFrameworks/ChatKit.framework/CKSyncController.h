
@interface CKSyncController : NSObject {
    int  _attachmentRestoredToken;
    int  _restoreStateChangedToken;
    bool  _restoring;
}

@property (nonatomic) int attachmentRestoredToken;
@property (nonatomic) int restoreStateChangedToken;
@property (getter=isRestoring, nonatomic) bool restoring;

+ (id)sharedInstance;

- (void)attachmentRestored;
- (int)attachmentRestoredToken;
- (id)init;
- (bool)isRestoring;
- (void)postAttachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)arg1;
- (int)restoreStateChangedToken;
- (void)setAttachmentRestoredToken:(int)arg1;
- (void)setRestoreStateChangedToken:(int)arg1;
- (void)setRestoring:(bool)arg1;
- (void)updateRestoreState;

@end
