
@interface CPLRecordChangeDiffTracker : NSObject {
    CPLDiffTracker * _diffTracker;
    unsigned long long  _trackingChangeType;
}

@property (nonatomic, readonly) NSArray *updatedProperties;

- (void).cxx_destruct;
- (bool)areObjectsDifferentOnProperty:(id)arg1 changeType:(unsigned long long)arg2;
- (id)description;
- (id)init;
- (id)initWithTrackingChangeTypeMask:(unsigned long long)arg1;
- (id)redactedDescription;
- (id)updatedProperties;
- (void)withTrackerForChangeType:(unsigned long long)arg1 block:(id /* block */)arg2;

@end
