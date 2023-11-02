
@interface HMIEmptyTask : HMITask {
    double  _duration;
}

@property (readonly) double duration;

- (double)duration;
- (id)initWithTaskID:(int)arg1 duration:(double)arg2;
- (void)mainInsideAutoreleasePool;

@end
