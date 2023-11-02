
@interface SISignalStore : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backingStore;
}

- (void).cxx_destruct;
- (id)init;
- (bool)logWithData:(id)arg1 signalType:(id)arg2 intentId:(id)arg3 timestamp:(id)arg4 error:(id*)arg5;

@end
