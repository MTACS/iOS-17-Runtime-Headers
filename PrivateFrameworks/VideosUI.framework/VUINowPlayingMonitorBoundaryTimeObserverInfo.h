
@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject {
    id /* block */  _handler;
    bool  _notifiedOfEntry;
    double  _time;
    NSUUID * _token;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool notifiedOfEntry;
@property (nonatomic) double time;
@property (nonatomic, retain) NSUUID *token;

- (void).cxx_destruct;
- (id /* block */)handler;
- (bool)notifiedOfEntry;
- (void)setHandler:(id /* block */)arg1;
- (void)setNotifiedOfEntry:(bool)arg1;
- (void)setTime:(double)arg1;
- (void)setToken:(id)arg1;
- (double)time;
- (id)token;

@end