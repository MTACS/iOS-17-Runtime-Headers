
@interface _GCAssertingProfile : NSObject <GCNamedProfile>

@property (retain) GCMotion *_motion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (id)_motion;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (id)initWithController:(id)arg1;
- (id)name;
- (id)productCategory;
- (unsigned int)sampleRate;
- (void)setButton:(id)arg1 pressed:(bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setController:(id)arg1;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setPlayerIndex:(long long)arg1;
- (void)set_motion:(id)arg1;
- (id /* block */)valueChangedHandler;

@end
