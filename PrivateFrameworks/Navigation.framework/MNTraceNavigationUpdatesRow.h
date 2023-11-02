
@interface MNTraceNavigationUpdatesRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long navigationUpdateType;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (long long)navigationUpdateType;
- (double)position;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
