
@interface RCPTraceLayer : CALayer {
    RCPEventStream * _eventStream;
    long long  _interfaceOrientation;
    unsigned long long  _time;
}

@property (nonatomic, retain) RCPEventStream *eventStream;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) unsigned long long time;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)eventStream;
- (long long)interfaceOrientation;
- (void)setEventStream:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setTime:(unsigned long long)arg1;
- (unsigned long long)time;

@end
