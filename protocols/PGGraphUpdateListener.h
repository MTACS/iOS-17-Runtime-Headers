
@protocol PGGraphUpdateListener <NSObject>

@required

- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;

@end
