
@interface BMSegmentManagerProtectedState : NSObject {
    bool  _isDataAccessible;
    NSMutableDictionary * _segmentFileHandles;
    NSMutableOrderedSet * _segmentNames;
}

- (void).cxx_destruct;
- (id)initWithDeviceStateIsUnlocked:(bool)arg1;

@end
