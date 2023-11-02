
@interface MUEVChargerAvailabilityDownloader : NSObject <MapsUI.EVChargerAvailabilityDownloaderDelegate> {
    <MUEVChargerAvailabilityDownloaderDelegate> * _delegate;
    _TtC6MapsUI31EVChargerAvailabilityDownloader * _downloader;
    bool  _isActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUEVChargerAvailabilityDownloaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _TtC6MapsUI31EVChargerAvailabilityDownloader *downloader;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didDownloadEVChargerAvailabilityWithEvCharger:(id)arg1;
- (id)downloader;
- (id)initWithMapItemIdentifier:(id)arg1;
- (bool)isActive;
- (void)setDelegate:(id)arg1;
- (void)setDownloader:(id)arg1;
- (void)setIsActive:(bool)arg1;

@end
