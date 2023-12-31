
@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    AVAssetWriterInputPassDescription * _nextPassDescription;
    int  _trackID;
}

@property (nonatomic, readonly) AVAssetWriterInputPassDescription *descriptionForNextPass;

- (void)_notifyWhetherMorePassesAreNeeded:(bool)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;
- (void)dealloc;
- (id)descriptionForNextPass;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 trackID:(int)arg2;
- (bool)isAsynchronous;
- (void)start;

@end
