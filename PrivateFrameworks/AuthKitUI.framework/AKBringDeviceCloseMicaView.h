
@interface AKBringDeviceCloseMicaView : UIView <AKUIMicaPlayerDelegate> {
    bool  _didBeginShowingDotCloud;
    CALayer * _dotCloudLayer;
    AKUIMicaPlayer * _micaPlayer;
    bool  _shouldshowDotCloud;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didBeginShowingDotCloud;
@property (nonatomic, retain) CALayer *dotCloudLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKUIMicaPlayer *micaPlayer;
@property (nonatomic) bool shouldshowDotCloud;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)AKUIMicaPlayerDidChangePlaybackTime:(id)arg1;
- (bool)arePhonesApart;
- (bool)arePhonesTogather;
- (bool)didBeginShowingDotCloud;
- (id)dotCloudLayer;
- (id)init;
- (void)layoutSubviews;
- (void)loadMicaFile;
- (id)micaPlayer;
- (void)setDidBeginShowingDotCloud:(bool)arg1;
- (void)setDotCloudLayer:(id)arg1;
- (void)setMicaPlayer:(id)arg1;
- (void)setShouldshowDotCloud:(bool)arg1;
- (bool)shouldshowDotCloud;

@end
