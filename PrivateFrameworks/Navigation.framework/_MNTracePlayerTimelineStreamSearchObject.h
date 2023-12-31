
@interface _MNTracePlayerTimelineStreamSearchObject : NSObject <MNTracePlayerTimelineStreamObjectType> {
    double  _position;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;

- (id)initWithPosition:(double)arg1;
- (double)position;

@end
