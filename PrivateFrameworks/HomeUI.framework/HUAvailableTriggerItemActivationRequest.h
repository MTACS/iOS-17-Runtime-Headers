
@interface HUAvailableTriggerItemActivationRequest : NSObject {
    bool  _active;
    NAFuture * _completionFuture;
    HUAvailableTriggerItem * _item;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) NAFuture *completionFuture;
@property (nonatomic) HUAvailableTriggerItem *item;

- (void).cxx_destruct;
- (bool)active;
- (id)completionFuture;
- (id)initWithItem:(id)arg1 active:(bool)arg2;
- (bool)isSameAsRequest:(id)arg1;
- (id)item;
- (void)setActive:(bool)arg1;
- (void)setCompletionFuture:(id)arg1;
- (void)setItem:(id)arg1;

@end
