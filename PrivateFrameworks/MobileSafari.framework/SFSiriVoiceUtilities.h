
@interface SFSiriVoiceUtilities : NSObject {
    SiriTTSDaemonSession * _activeSiriDaemonSession;
    NSString * _activeSiriReaderSessionIdentifier;
    NSURL * _activeSiriReaderSessionURL;
    NSArray * _downloadedSiriVoiceLanguages;
}

@property (nonatomic, copy) NSString *activeSiriReaderSessionIdentifier;
@property (nonatomic, copy) NSURL *activeSiriReaderSessionURL;
@property (nonatomic, readonly) NSArray *downloadedSiriVoiceLanguages;

+ (id)sharedVoiceUtilities;

- (void).cxx_destruct;
- (id)activeSiriReaderSessionIdentifier;
- (id)activeSiriReaderSessionURL;
- (id)downloadedSiriVoiceLanguages;
- (void)fetchAvailableVoiceLanguages;
- (void)setActiveSiriReaderSessionIdentifier:(id)arg1;
- (void)setActiveSiriReaderSessionURL:(id)arg1;

@end
