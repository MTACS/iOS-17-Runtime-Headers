
@interface AVCustomRoutingEvent : NSObject {
    long long  _reason;
    AVCustomDeviceRoute * _route;
    bool  _succeeded;
}

@property (nonatomic) long long reason;
@property (nonatomic) AVCustomDeviceRoute *route;
@property (nonatomic) bool succeeded;

- (void)dealloc;
- (id)description;
- (id)init;
- (long long)reason;
- (id)route;
- (void)setReason:(long long)arg1;
- (void)setRoute:(id)arg1;
- (void)setSucceeded:(bool)arg1;
- (bool)succeeded;

@end
