
@interface CACLanguageAssetManager : NSObject {
    NSDictionary * _cachedInstallationStatus;
    NSMutableDictionary * _downloadErrorDictionary;
    NSDictionary * _downloadProgress;
    NSMutableDictionary * _downloadProgressDictionary;
    bool  _isInstallationStatusStale;
    bool  _isRegisteredForCallback;
    NSMutableDictionary * _lastReportedProgressDictionary;
}

@property (nonatomic, retain) NSDictionary *cachedInstallationStatus;
@property (nonatomic, retain) NSMutableDictionary *downloadErrorDictionary;
@property (nonatomic, retain) NSDictionary *downloadProgress;
@property (nonatomic, retain) NSMutableDictionary *downloadProgressDictionary;
@property (nonatomic) bool isInstallationStatusStale;
@property (nonatomic) bool isRegisteredForCallback;
@property (nonatomic, retain) NSMutableDictionary *lastReportedProgressDictionary;

+ (id)downloadedLocaleIdentifiers;
+ (id)downloadingLocaleIdentifiers;
+ (bool)isAssetsInstalledForBestLocale;
+ (bool)isAssetsInstalledForLocale:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_downloadProgressCallback:(struct __CFDictionary { }*)arg1;
- (void)_handleErrorInDownloadForLanguage:(id)arg1;
- (void)_sendProgressNotificationIfNeededForLanguage:(id)arg1;
- (void)_updateInstallationStatusFromDownloadStatus:(struct __CFDictionary { }*)arg1;
- (id)cachedInstallationStatus;
- (void)cancelDownloadOfLanguage:(id)arg1;
- (id)downloadErrorDictionary;
- (id)downloadProgress;
- (id)downloadProgressDictionary;
- (id)downloadProgressForLanguage:(id)arg1;
- (unsigned long long)errorStatusForLanguage:(id)arg1;
- (id)init;
- (id)installationStatus;
- (bool)isInstallationStatusStale;
- (bool)isRegisteredForCallback;
- (id)lastReportedProgressDictionary;
- (void)markInstallationStatusStale;
- (id)purgeInstalledAsset;
- (void)registerForCallback;
- (void)setCachedInstallationStatus:(id)arg1;
- (void)setDownloadErrorDictionary:(id)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setDownloadProgressDictionary:(id)arg1;
- (void)setIsInstallationStatusStale:(bool)arg1;
- (void)setIsRegisteredForCallback:(bool)arg1;
- (void)setLastReportedProgressDictionary:(id)arg1;
- (void)startDownloadOfLanguage:(id)arg1;
- (id)supportedLocaleIdentifiers;

@end
