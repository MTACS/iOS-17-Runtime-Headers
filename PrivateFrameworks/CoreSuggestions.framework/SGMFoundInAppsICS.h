
@interface SGMFoundInAppsICS : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 timezone:(struct SGMFoundInAppsICSTZValue_ { unsigned long long x1; })arg2 datetime:(struct SGMFoundInAppsDatetimeType_ { unsigned long long x1; })arg3;
- (id)tracker;

@end
