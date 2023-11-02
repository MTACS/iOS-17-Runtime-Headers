
@interface CKBrowserItemPayload : IMPluginPayload {
    NSDictionary * _attributionInfo;
    NSURL * _fileURL;
    NSString * _filename;
    CKMediaObject * _mediaObject;
    UIViewController<CKPluginEntryViewController> * _photoShelfViewController;
    bool  _requiresValidation;
    bool  _useDirectSend;
    NSURL * _videoComplementFileURL;
}

@property (nonatomic, retain) NSDictionary *attributionInfo;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, retain) UIViewController<CKPluginEntryViewController> *photoShelfViewController;
@property (nonatomic) bool requiresValidation;
@property (nonatomic) bool useDirectSend;
@property (nonatomic, retain) NSURL *videoComplementFileURL;

+ (id)browserItemFromSticker:(id)arg1;
+ (id)browserItemPayloadForCollaborationWithURL:(id)arg1 collaborationType:(long long)arg2;
+ (id)browserItemPayloadFromIMPluginPayload:(id)arg1;
+ (id)createBrowserItemPayloadWithRichLinkMetadata:(id)arg1;
+ (id)createBrowserItemPayloadWithURL:(id)arg1 data:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__ck_urlFromTextBodyForRichLink;
- (id)attributionInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)filename;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPluginPayload:(id)arg1;
- (id)mediaObject;
- (id)mediaObjectFromPayload;
- (id)photoShelfViewController;
- (bool)requiresValidation;
- (void)setAttributionInfo:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setPhotoShelfViewController:(id)arg1;
- (void)setRequiresValidation:(bool)arg1;
- (void)setUseDirectSend:(bool)arg1;
- (void)setVideoComplementFileURL:(id)arg1;
- (bool)shouldSendAsMediaObject;
- (bool)shouldSendAsRichLink;
- (bool)shouldSendAsText;
- (id)transcoderUserInfo;
- (bool)useDirectSend;
- (id)videoComplementFileURL;

@end
