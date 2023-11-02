
@interface CKTransientFileTransfer : NSObject <CKFileTransfer> {
    IMMessage * IMMessage;
    NSURL * animatedImageCacheURL;
    NSDictionary * attributionInfo;
    NSString * audioTranscriptionText;
    long long  commSafetySensitive;
    unsigned long long  currentBytes;
    bool  downloadable;
    bool  downloading;
    NSError * error;
    bool  fileDataReady;
    bool  fileIsAnimated;
    NSURL * fileURL;
    bool  fileURLFinalized;
    NSString * filename;
    NSString * guid;
    bool  hideAttachment;
    bool  isDirectory;
    bool  isFromMomentShare;
    bool  isScreenshot;
    bool  isSticker;
    bool  rejected;
    bool  restoring;
    NSURL * shareURL;
    unsigned long long  stickerEffectType;
    NSDictionary * stickerUserInfo;
    unsigned long long  totalBytes;
    NSDictionary * transcoderUserInfo;
}

@property (nonatomic, retain) IMMessage *IMMessage;
@property (nonatomic, readonly, copy) NSURL *animatedImageCacheURL;
@property (nonatomic, copy) NSDictionary *attributionInfo;
@property (nonatomic, readonly) NSString *audioTranscriptionText;
@property (nonatomic, readonly) long long commSafetySensitive;
@property (nonatomic, readonly) unsigned long long currentBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDownloadable, nonatomic, readonly) bool downloadable;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (nonatomic, readonly, copy) NSError *error;
@property (getter=isFileDataReady, nonatomic, readonly) bool fileDataReady;
@property (nonatomic, readonly) bool fileIsAnimated;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (getter=isFileURLFinalized, nonatomic, readonly) bool fileURLFinalized;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly, copy) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideAttachment;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) bool isFromMomentShare;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly) bool isSticker;
@property (getter=isRejected, nonatomic, readonly) bool rejected;
@property (getter=isRestoring, nonatomic, readonly) bool restoring;
@property (nonatomic, readonly, copy) NSURL *shareURL;
@property (nonatomic) unsigned long long stickerEffectType;
@property (nonatomic, readonly, copy) NSDictionary *stickerUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalBytes;
@property (nonatomic, readonly, copy) NSDictionary *transcoderUserInfo;

- (void).cxx_destruct;
- (id)IMMessage;
- (id)animatedImageCacheURL;
- (id)attributionInfo;
- (id)audioTranscriptionText;
- (long long)commSafetySensitive;
- (unsigned long long)currentBytes;
- (id)error;
- (void)fetchHighQualityFile:(id /* block */)arg1;
- (bool)fileIsAnimated;
- (id)fileURL;
- (id)filename;
- (id)guid;
- (bool)hideAttachment;
- (id)initWithAttributionInfo:(id)arg1;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(bool)arg4;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(bool)arg4 isScreenshot:(bool)arg5;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (bool)isDirectory;
- (bool)isDownloadable;
- (bool)isDownloading;
- (bool)isFileDataReady;
- (bool)isFileURLFinalized;
- (bool)isFromMomentShare;
- (bool)isRejected;
- (bool)isRestoring;
- (bool)isScreenshot;
- (bool)isSticker;
- (void)mediaObjectAdded;
- (void)mediaObjectRemoved;
- (void)setAttributionInfo:(id)arg1;
- (void)setIMMessage:(id)arg1;
- (void)setStickerEffectType:(unsigned long long)arg1;
- (id)shareURL;
- (unsigned long long)stickerEffectType;
- (id)stickerUserInfo;
- (unsigned long long)totalBytes;
- (id)transcoderUserInfo;

@end