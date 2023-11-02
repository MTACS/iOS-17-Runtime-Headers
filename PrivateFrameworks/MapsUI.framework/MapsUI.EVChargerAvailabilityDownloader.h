
@interface MapsUI.EVChargerAvailabilityDownloader : NSObject {
    void delegate;
    void isActive;
    void isDownloadInProgress;
    void mapItemIdentifier;
    void timer;
}

@property (nonatomic) <_TtP6MapsUI39EVChargerAvailabilityDownloaderDelegate_> *delegate;
@property (nonatomic) bool isActive;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithMapItemIdentifier:(id)arg1;
- (bool)isActive;
- (void)setDelegate:(id)arg1;
- (void)setIsActive:(bool)arg1;

@end
