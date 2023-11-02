
@interface MTROtaSoftwareUpdateRequestorClusterDownloadErrorEvent : MTROTASoftwareUpdateRequestorClusterDownloadErrorEvent

@property (nonatomic, copy) NSNumber *bytesDownloaded;
@property (nonatomic, copy) NSNumber *platformCode;
@property (nonatomic, copy) NSNumber *progressPercent;
@property (nonatomic, copy) NSNumber *softwareVersion;

@end
