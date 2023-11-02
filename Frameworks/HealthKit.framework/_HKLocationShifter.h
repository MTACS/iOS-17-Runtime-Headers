
@interface _HKLocationShifter : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (bool)isShiftRequiredForLocations:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)shiftLocations:(id)arg1 withCompletion:(id /* block */)arg2;

@end
