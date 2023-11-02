
@interface BRCFileCoordinatorContext : NSObject {
    int  _endTracingCode;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        unsigned long long sectionID; 
        char *function; 
        int line; 
    }  _sections;
    int  _startTracingCode;
    brc_task_tracker * _tracker;
}

@property (nonatomic) int endTracingCode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct { unsigned long long x1; char *x2; int x3; } sections;
@property (nonatomic) int startTracingCode;
@property (nonatomic, retain) brc_task_tracker *tracker;

- (void).cxx_destruct;
- (int)endTracingCode;
- (id)initWithTracker:(id)arg1 queue:(id)arg2 startCode:(int)arg3 endCode:(int)arg4;
- (id)queue;
- (struct { unsigned long long x1; char *x2; int x3; })sections;
- (void)setEndTracingCode:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setSections:(struct { unsigned long long x1; char *x2; int x3; })arg1;
- (void)setStartTracingCode:(int)arg1;
- (void)setTracker:(id)arg1;
- (int)startTracingCode;
- (id)tracker;

@end
