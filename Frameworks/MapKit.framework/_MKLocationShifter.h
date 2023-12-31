
@interface _MKLocationShifter : NSObject {
    GEOLocationShifter * _locationShifter;
}

@property (getter=isLocationShiftEnabled, nonatomic, readonly) bool locationShiftEnabled;

+ (bool)isLocationShiftRequiredForLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2 withShiftRequestBlock:(id /* block */)arg3;
- (id)init;
- (bool)isLocationShiftEnabled;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2 callbackQueue:(id)arg3;

@end
