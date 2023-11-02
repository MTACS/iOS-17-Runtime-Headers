
@interface PXGAXCoalescingResponder : NSObject <PXGAXResponder> {
    bool  _pauseEventDelivery;
    NSMutableArray * _pendingAXEventBlocks;
    <PXGAXResponder> * axNextResponder;
}

@property (nonatomic) <PXGAXResponder> *axNextResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pauseEventDelivery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_distributeEvents;
- (void)_notifyResponder:(id /* block */)arg1;
- (id)axContainingScrollViewForAXGroup:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (id)axNextResponder;
- (bool)pauseEventDelivery;
- (void)setAxNextResponder:(id)arg1;
- (void)setPauseEventDelivery:(bool)arg1;

@end
