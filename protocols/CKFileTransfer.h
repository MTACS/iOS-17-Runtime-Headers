
@protocol CKFileTransfer <NSObject>

@required

- (IMMessage *)IMMessage;
- (NSURL *)animatedImageCacheURL;
- (NSDictionary *)attributionInfo;
- (NSString *)audioTranscriptionText;
- (long long)commSafetySensitive;
- (unsigned long long)currentBytes;
- (NSError *)error;
- (void)fetchHighQualityFile:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, void*
- (bool)fileIsAnimated;
- (NSURL *)fileURL;
- (NSString *)filename;
- (NSString *)guid;
- (bool)hideAttachment;
- (id)initWithFileURL:(NSURL *)arg1 transcoderUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3 hideAttachment:(bool)arg4;
- (id)initWithFileURL:(NSURL *)arg1 transcoderUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3 hideAttachment:(bool)arg4 isScreenshot:(bool)arg5;
- (id)initWithTransferGUID:(NSString *)arg1 imMessage:(IMMessage *)arg2;
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
- (void)setIMMessage:(IMMessage *)arg1;
- (void)setStickerEffectType:(unsigned long long)arg1;
- (NSURL *)shareURL;
- (unsigned long long)stickerEffectType;
- (NSDictionary *)stickerUserInfo;
- (unsigned long long)totalBytes;
- (NSDictionary *)transcoderUserInfo;

@optional

- (id)initWithStickerFileURL:(NSURL *)arg1 transferUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3 animatedImageCacheURL:(NSURL *)arg4;

@end
