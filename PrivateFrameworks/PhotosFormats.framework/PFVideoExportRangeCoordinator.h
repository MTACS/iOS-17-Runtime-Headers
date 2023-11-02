
@interface PFVideoExportRangeCoordinator : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _availableRange;
    bool  _cancelled;
    NSObject<OS_dispatch_queue> * _rangeCoordinatorStateQueue;
    NSMutableArray * _waitingCallers;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } availableRange;
@property bool cancelled;
@property (retain) NSObject<OS_dispatch_queue> *rangeCoordinatorStateQueue;
@property (retain) NSMutableArray *waitingCallers;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })availableRange;
- (void)cancel;
- (bool)cancelled;
- (id)init;
- (id)rangeCoordinatorStateQueue;
- (void)setAvailableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCancelled:(bool)arg1;
- (void)setRangeCoordinatorStateQueue:(id)arg1;
- (void)setWaitingCallers:(id)arg1;
- (void)updateAvailableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)waitForAvailabilityOfRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 timeout:(unsigned long long)arg2 error:(id*)arg3;
- (id)waitingCallers;

@end
