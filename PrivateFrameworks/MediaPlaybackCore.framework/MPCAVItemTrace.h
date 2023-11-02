
@interface MPCAVItemTrace : NSObject {
    unsigned int  _endEvent;
    double  _ended;
    MPAVItem * _item;
    NSString * _name;
    double  _started;
}

@property (nonatomic) unsigned int endEvent;
@property (nonatomic) double ended;
@property (nonatomic) MPAVItem *item;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double started;

+ (id)traceIntervalWithName:(id)arg1 item:(id)arg2 beginEvent:(unsigned int)arg3 endEvent:(unsigned int)arg4;
+ (void)traceWithName:(id)arg1 item:(id)arg2 event:(unsigned int)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (unsigned int)endEvent;
- (void)endInterval;
- (double)ended;
- (id)item;
- (id)name;
- (void)setEndEvent:(unsigned int)arg1;
- (void)setEnded:(double)arg1;
- (void)setItem:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStarted:(double)arg1;
- (double)started;

@end
