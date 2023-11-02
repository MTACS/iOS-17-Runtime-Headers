
@interface DIOneshotTimer : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  deadline;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void label;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void timeInterval;
    void timer;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 identifier:(id)arg3 label:(id)arg4 handler:(id /* block */)arg5;

@end
