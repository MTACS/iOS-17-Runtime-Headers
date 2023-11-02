
@interface _COCapabilityObserver : NSObject {
    id /* block */  _block;
    NSString * _capability;
    id  _cluster;
    bool  _lastValue;
    bool  _notified;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly, copy) NSString *capability;
@property (nonatomic, readonly, copy) id cluster;
@property (nonatomic) bool lastValue;
@property (nonatomic) bool notified;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)capability;
- (id)cluster;
- (id)description;
- (id)initWithCapability:(id)arg1 cluster:(id)arg2 block:(id /* block */)arg3;
- (bool)lastValue;
- (bool)notified;
- (void)notify:(bool)arg1;
- (void)setLastValue:(bool)arg1;
- (void)setNotified:(bool)arg1;

@end
