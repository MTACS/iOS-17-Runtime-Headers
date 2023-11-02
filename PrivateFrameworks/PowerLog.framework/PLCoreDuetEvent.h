
@interface PLCoreDuetEvent : NSObject {
    NSString * _bundleID;
    NSDictionary * _childBundleIDToWeight;
    NSArray * _eventIntervals;
    NSString * _processName;
    unsigned char  _updateType;
}

@property (retain) NSString *bundleID;
@property (retain) NSDictionary *childBundleIDToWeight;
@property (retain) NSArray *eventIntervals;
@property (retain) NSString *processName;
@property unsigned char updateType;

- (void).cxx_destruct;
- (id)bundleID;
- (id)childBundleIDToWeight;
- (id)description;
- (id)eventIntervals;
- (id)processName;
- (void)setBundleID:(id)arg1;
- (void)setChildBundleIDToWeight:(id)arg1;
- (void)setEventIntervals:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setUpdateType:(unsigned char)arg1;
- (unsigned char)updateType;

@end
