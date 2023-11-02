
@interface _ANESharedEvents : NSObject {
    NSArray * _signalEvents;
    NSArray * _waitEvents;
}

@property (nonatomic, retain) NSArray *signalEvents;
@property (nonatomic, retain) NSArray *waitEvents;

+ (id)new;
+ (id)sharedEventsWithSignalEvents:(id)arg1 waitEvents:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSignalEvents:(id)arg1 waitEvents:(id)arg2;
- (void)setSignalEvents:(id)arg1;
- (void)setWaitEvents:(id)arg1;
- (id)signalEvents;
- (id)waitEvents;

@end
