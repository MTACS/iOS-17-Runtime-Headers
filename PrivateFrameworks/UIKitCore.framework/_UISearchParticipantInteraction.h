
@interface _UISearchParticipantInteraction : NSObject <UIInteraction, UIInteraction_Private> {
    <BSInvalidatable> * __searchParticipantToken;
    UIWindowScene * __windowScene;
    UIView * _view;
}

@property (nonatomic, retain) <BSInvalidatable> *_searchParticipantToken;
@property (nonatomic) UIWindowScene *_windowScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_searchParticipantToken;
- (void)_teardown;
- (void)_updateActiveSearchParticipationIfNeeded;
- (id)_windowScene;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (void)setView:(id)arg1;
- (void)set_searchParticipantToken:(id)arg1;
- (void)set_windowScene:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
