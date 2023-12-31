
@interface TSDAudioRep : TSDMediaRep <TSDAudioHUDControllerDelegate, TSKAVPlayerControllerDelegate> {
    <TSDAudioHUDController> * mAudioHUDController;
    CALayer * mAudioImageLayer;
    float  mDynamicVolume;
    bool  mIsChangingDynamicVolume;
    CALayer * mPlayPauseButtonLayer;
    TSKAVPlayerController * mPlayerController;
}

@property (nonatomic, readonly) <TSDAudioHUDController> *audioHUDController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSDMovieInfo *movieInfo;
@property (nonatomic, readonly) TSKAVPlayerController *playerController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float volume;

- (id)audioHUDController;
- (void)becameNotSelected;
- (void)becameSelected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)canResetMediaSize;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didEndZooming;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (bool)exclusivelyProvidesGuidesWhileAligning;
- (bool)hitPlayPauseButtonWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isDraggable;
- (Class)layerClass;
- (id)movieInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)p_isEditingAnimations;
- (bool)p_isPlaying;
- (void)p_setupPlayerControllerIfNecessary;
- (bool)p_shouldPlayerControllerExistThroughoutSelection;
- (bool)p_shouldShowPlayPauseLayers;
- (void)p_teardownPlayerController;
- (void)p_updateButtonForPlaying:(bool)arg1 pressed:(bool)arg2;
- (void)p_updateEndTime;
- (void)p_updateRepeatMode;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (id)playerController;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)processChangedProperty:(int)arg1;
- (bool)providesGuidesWhileAligning;
- (bool)shouldAllowReplacementFromDrop;
- (bool)shouldAllowReplacementFromPaste;
- (bool)shouldShowDragHUD;
- (bool)shouldShowKnobs;
- (bool)shouldShowMediaReplaceUI;
- (bool)shouldShowSelectionHighlight;
- (bool)shouldShowSizesInRulers;
- (id)textureWithContext:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)updatePlayButtonForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (float)volume;
- (void)willBeRemoved;
- (void)willBeginReadMode;
- (void)willBeginZooming;
- (void)willUpdateLayer:(id)arg1;

@end
