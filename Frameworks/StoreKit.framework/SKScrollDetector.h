
@interface SKScrollDetector : NSObject {
    <SKScreenTrackingDelegate> * _screenTrakingDelegate;
    NSMutableArray * _subscribedScrollers;
}

@property (nonatomic) <SKScreenTrackingDelegate> *screenTrakingDelegate;
@property (nonatomic, retain) NSMutableArray *subscribedScrollers;

- (void).cxx_destruct;
- (void)dealloc;
- (void)findAndListenForScrollingOfView:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)screenTrakingDelegate;
- (void)setScreenTrakingDelegate:(id)arg1;
- (void)setSubscribedScrollers:(id)arg1;
- (void)stopListeningForScrollingOfView:(id)arg1;
- (id)subscribedScrollers;

@end
