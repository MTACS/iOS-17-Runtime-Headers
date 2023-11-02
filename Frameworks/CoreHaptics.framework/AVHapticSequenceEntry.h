
@interface AVHapticSequenceEntry : NSObject {
    bool  _detached;
    id /* block */  _handler;
    bool  _running;
}

@property bool detached;
@property (copy) id /* block */ handler;
@property bool running;

- (void).cxx_destruct;
- (bool)detached;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (bool)running;
- (void)setDetached:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setRunning:(bool)arg1;

@end
