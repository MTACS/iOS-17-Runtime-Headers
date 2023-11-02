
@interface ARQuickLookPreviewItem : NSObject <QLPreviewItem, QLPreviewItemPrivateProtocol> {
    bool  _allowsContentScaling;
    NSURL * _canonicalWebPageURL;
    NSURL * _fileURL;
    bool  _forceIgnoreMuteSwitch;
    bool  _wantsStatusPillHidden;
}

@property (readonly) NSString *MIMEType;
@property (nonatomic) bool allowsContentScaling;
@property (readonly) NSURL *alternateShareURL;
@property (readonly) double autoPlaybackPosition;
@property (readonly) UIColor *backgroundColorOverride;
@property (nonatomic, retain) NSURL *canonicalWebPageURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic) bool forceIgnoreMuteSwitch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPromisedItem;
@property (nonatomic, readonly) NSString *previewItemContentType;
@property (nonatomic, copy) NSDictionary *previewItemDisplayState;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) NSURL *previewItemURLForDisplay;
@property (nonatomic, copy) NSDictionary *previewOptions;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsStatusPillHidden;

- (void).cxx_destruct;
- (bool)allowsContentScaling;
- (id)canonicalWebPageURL;
- (id)fileURL;
- (bool)forceIgnoreMuteSwitch;
- (id)initWithFileAtURL:(id)arg1;
- (id)previewItemURL;
- (id)previewOptions;
- (void)setAllowsContentScaling:(bool)arg1;
- (void)setCanonicalWebPageURL:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setForceIgnoreMuteSwitch:(bool)arg1;
- (void)setWantsStatusPillHidden:(bool)arg1;
- (bool)wantsStatusPillHidden;

@end
