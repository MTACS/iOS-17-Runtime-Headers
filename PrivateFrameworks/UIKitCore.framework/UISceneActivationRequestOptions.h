
@interface UISceneActivationRequestOptions : NSObject <BSDebugDescriptionProviding, NSCopying> {
    bool  __requestFullscreen;
    long long  _collectionJoinBehavior;
    bool  _preserveLayout;
    UIScene * _requestingScene;
}

@property (nonatomic) long long _collectionJoinBehavior;
@property (setter=_setRequestFullscreen:, nonatomic) bool _requestFullscreen;
@property (nonatomic) long long collectionJoinBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preserveLayout;
@property (nonatomic, retain) UIScene *requestingScene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_collectionJoinBehavior;
- (bool)_requestFullscreen;
- (void)_setRequestFullscreen:(bool)arg1;
- (long long)collectionJoinBehavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)preserveLayout;
- (id)requestingScene;
- (void)setCollectionJoinBehavior:(long long)arg1;
- (void)setPreserveLayout:(bool)arg1;
- (void)setRequestingScene:(id)arg1;
- (void)set_collectionJoinBehavior:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
