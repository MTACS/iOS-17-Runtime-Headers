
@interface FigCaptureInternalSinkConfiguration : FigCaptureSinkConfiguration {
    int  _subType;
}

@property (nonatomic, readonly) int subType;

- (id)initWithSinkSubType:(int)arg1;
- (int)sinkType;
- (int)subType;

@end
