
@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _forwardTransitionController;
    void * _gestureController;
    struct WeakObjCPtr<UIView> { 
        id m_weakReference; 
    }  _gestureRecognizerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)directionForTransition:(id)arg1;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (id)initWithViewGestureController:(void*)arg1 gestureRecognizerView:(id)arg2;
- (bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (void)invalidate;
- (bool)isNavigationSwipeGestureRecognizer:(id)arg1;
- (bool)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)transitionForDirection:(int)arg1;

@end
