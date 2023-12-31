
@interface PLPhotosDefaults : NSObject {
    MPMediaItemCollection * _musicCollection;
    bool  _shouldPlayMusic;
    bool  _summarizeMomentSections;
    int  _transition;
}

+ (int)randomTransition;
+ (id)sharedInstance;

- (void)_reloadPhotoDefaultValuesAndNotify:(bool)arg1;
- (void)dealloc;
- (id)init;
- (id)musicCollection;
- (void)reloadPhotoDefaultValues;
- (void)setMusicCollection:(id)arg1;
- (void)setShouldPlayMusic:(bool)arg1;
- (void)setTransition:(int)arg1;
- (bool)shouldPlayMusic;
- (bool)summarizeMomentSections;
- (int)transition;
- (int)transitionForAnimationMovingForward:(bool)arg1;

@end
