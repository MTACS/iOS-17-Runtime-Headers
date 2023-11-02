
@interface PELivePortraitBehaviorController : NSObject {
    <PEAsset> * _asset;
    bool  _changingPortraitLightingDisablesLive;
    <PELivePortraitBehaviorDelegate> * _delegate;
}

@property (nonatomic, retain) <PEAsset> *asset;
@property bool changingPortraitLightingDisablesLive;
@property (nonatomic) <PELivePortraitBehaviorDelegate> *delegate;

- (void).cxx_destruct;
- (void)applySideEffectsForAction:(unsigned long long)arg1 compositionController:(id)arg2;
- (id)asset;
- (bool)changingPortraitLightingDisablesLive;
- (id)delegate;
- (id)initWithAsset:(id)arg1 delegate:(id)arg2;
- (void)setAsset:(id)arg1;
- (void)setChangingPortraitLightingDisablesLive:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
