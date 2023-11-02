
@interface _UIClientToHostRelationshipGestureInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    NSMutableArray * _gestureRecognizers;
    NSString * _hostIdentifier;
    <_UIAssertion> * _pointerUpdatePauseAssertion;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *hostIdentifier;
@property (nonatomic, retain) <_UIAssertion> *pointerUpdatePauseAssertion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)_hostGestureRecognizersForFailureRelationshipsWithIdentifier:(id)arg1;
+ (void)dispatchGestureRecognizerStateChange:(long long)arg1 toHostGestureWithIdentifier:(id)arg2;
+ (id)hostGestureRecognizerForFailureRelationshipsWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidatePointerPauseAssertion;
- (void)_wrappedRecognizerDidRecognize:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (id)hostIdentifier;
- (id)initWithHostIdentifier:(id)arg1;
- (id)pointerUpdatePauseAssertion;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setPointerUpdatePauseAssertion:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
