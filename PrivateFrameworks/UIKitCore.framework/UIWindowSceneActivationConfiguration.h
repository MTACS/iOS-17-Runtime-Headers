
@interface UIWindowSceneActivationConfiguration : NSObject <NSCopying> {
    unsigned long long  __animationSource;
    <_UIWindowSceneActivator> * __sceneActivator;
    UIWindowSceneActivationRequestOptions * _options;
    UITargetedPreview * _preview;
    NSUserActivity * _userActivity;
}

@property (setter=_setAnimationSource:, nonatomic) unsigned long long _animationSource;
@property (setter=_setSceneActivator:, nonatomic) <_UIWindowSceneActivator> *_sceneActivator;
@property (nonatomic, retain) UIWindowSceneActivationRequestOptions *options;
@property (nonatomic, retain) UITargetedPreview *preview;
@property (nonatomic, readonly) NSUserActivity *userActivity;

- (void).cxx_destruct;
- (unsigned long long)_animationSource;
- (id)_sceneActivator;
- (void)_setAnimationSource:(unsigned long long)arg1;
- (void)_setSceneActivator:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithUserActivity:(id)arg1;
- (id)options;
- (id)preview;
- (void)setOptions:(id)arg1;
- (void)setPreview:(id)arg1;
- (id)userActivity;

@end
