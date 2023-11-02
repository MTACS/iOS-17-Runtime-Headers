
@interface PKPencilStatisticsManager : NSObject {
    double  _accumulatedHoverDuration;
    double  _accumulatedOnScreenDuration;
    unsigned long long  _activePencilMinutes;
    NSString * _allowedBundleID;
    unsigned long long  _doubleTapsInRange;
    unsigned long long  _doubleTapsOutsideRange;
    bool  _hasStarted;
    double  _intentionalHoverDuration;
    struct unique_ptr<PKRunningStat, std::default_delete<PKRunningStat>> { 
        struct __compressed_pair<PKRunningStat *, std::default_delete<PKRunningStat>> { 
            struct PKRunningStat {} *__value_; 
        } __ptr_; 
    }  _intentionalHoverStats;
    double  _intentionalToolPreviewDuration;
    unsigned long long  _numberOfHoverEventsInEdge;
    unsigned long long  _numberOfHoverEventsInExterior;
    double  _startOfSessionTimestamp;
    NSString * _toolName;
    unsigned long long  _totalNumberOfHoverEvents;
}

+ (id)allowedBundleIDFromBundleID:(id)arg1;
+ (bool)isAllowedBundleID:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
