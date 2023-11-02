
@interface PXVideoView : UIView {
    <PXVideoViewDelegate> * _delegate;
    struct { 
        bool readinessDidChange; 
    }  _delegateRespondsTo;
    NSString * _kvoProxyIdentifier;
    ISWrappedAVPlayer * _player;
}

@property (nonatomic) <PXVideoViewDelegate> *delegate;
@property (nonatomic, copy) NSString *kvoProxyIdentifier;
@property (nonatomic, retain) ISWrappedAVPlayer *player;
@property (nonatomic, readonly) ISAVPlayerLayer *playerLayer;
@property (nonatomic) bool toneMapToStandardDynamicRange;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic, readonly) bool videoIsReadyForDisplay;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_layerReadyForDisplayDidChange;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)kvoProxyIdentifier;
- (id)player;
- (id)playerLayer;
- (void)setDelegate:(id)arg1;
- (void)setKvoProxyIdentifier:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setToneMapToStandardDynamicRange:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (bool)toneMapToStandardDynamicRange;
- (id)videoGravity;
- (bool)videoIsReadyForDisplay;

@end
