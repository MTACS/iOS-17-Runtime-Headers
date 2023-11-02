
@interface XRRunLoopTicket : NSObject {
    NSObject<OS_dispatch_group> * _group;
    bool  _stopWhenDone;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic) bool stopWhenDone;

- (void).cxx_destruct;
- (id)group;
- (void)setGroup:(id)arg1;
- (void)setStopWhenDone:(bool)arg1;
- (bool)stopWhenDone;

@end
