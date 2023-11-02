
@interface _SBPIPEndStashTabSuppressionGestureManager : NSObject <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * _doubleTapRecognizer;
    UITapGestureRecognizer * _singleTapRecognizer;
    SBSystemGestureManager * _systemGestureManager;
    NSMutableSet * _targets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSystemRecognizers;
- (void)_removeGestureRecognizers;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithSystemGestureManager:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;

@end
