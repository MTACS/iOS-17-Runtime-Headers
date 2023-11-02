
@interface CKPluginExtensionStateObserver : NSObject {
    bool  _iTunesStoreDialogPresented;
    bool  _passKitUIPresented;
    bool  _stickerDragActiveInCurrentProcess;
}

@property (nonatomic) bool iTunesStoreDialogPresented;
@property (nonatomic) bool passKitUIPresented;
@property (nonatomic) bool stickerDragActiveInCurrentProcess;

+ (id)sharedInstance;

- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIDismissed;
- (void)_passKitUIPresented;
- (void)_stickerDragEnded:(id)arg1;
- (void)_stickerDragStarted:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)iTunesStoreDialogPresented;
- (id)init;
- (bool)passKitUIPresented;
- (void)prepareForResume;
- (void)setITunesStoreDialogPresented:(bool)arg1;
- (void)setPassKitUIPresented:(bool)arg1;
- (void)setStickerDragActiveInCurrentProcess:(bool)arg1;
- (bool)stickerDragActiveInCurrentProcess;

@end
