
@protocol AXResourceDownloadInformationDelegate <NSObject>

@required

- (bool)allowedToDownload;
- (void)deleteResource:(TTSAXResource *)arg1;
- (void)openVoiceSettingsFor:(TTSAXResource *)arg1;
- (void)playSampleForResource:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: TTSAXResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startDownloadForResource:(TTSAXResource *)arg1;
- (void)stopDownloadForResource:(TTSAXResource *)arg1;

@end
