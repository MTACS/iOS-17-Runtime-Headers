
@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        struct { 
            int pid; 
            unsigned int thread; 
            int run_state; 
            unsigned long long dispatch_queue_serial_num; 
        } context; 
        unsigned long long *frames; 
        unsigned long long *framePtrs; 
        unsigned int length; 
    }  _asyncCallstack;
    struct { 
        struct { 
            int pid; 
            unsigned int thread; 
            int run_state; 
            unsigned long long dispatch_queue_serial_num; 
        } context; 
        unsigned long long *frames; 
        unsigned long long *framePtrs; 
        unsigned int length; 
    }  _callstack;
    int  _flavor;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long timestamp;

+ (bool)supportsSecureCoding;

- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })_symbolicator;
- (unsigned long long*)asyncBacktrace;
- (unsigned int)asyncBacktraceLength;
- (unsigned long long*)backtrace;
- (unsigned int)backtraceLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)dispatchQueueSerialNumber;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { }*)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSamplingContext:(struct sampling_context_t { }*)arg1 thread:(unsigned int)arg2 recordFramePointers:(bool)arg3;
- (void)setThreadState:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long*)stackFramePointers;
- (unsigned int)thread;
- (int)threadState;
- (unsigned long long)timestamp;

@end
