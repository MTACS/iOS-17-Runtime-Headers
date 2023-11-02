
@interface SVAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SVVideoPlaybackObserver> {
    unsigned long long  _behavior;
    <SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _videoBounds;
}

@property (nonatomic) unsigned long long behavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;

- (void).cxx_destruct;
- (unsigned long long)behavior;
- (void)conditionsChanged;
- (id)delegate;
- (bool)fullscreenPlaybackRequiredForCurrentConditions;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;

@end
