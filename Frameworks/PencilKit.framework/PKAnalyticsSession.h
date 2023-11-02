
@interface PKAnalyticsSession : NSObject {
    long long  _strokesPerSession;
    long long  _textLineStraighteningPerSession;
    long long  _textLineStraighteningUndoPerSession;
    long long  _undosPerSession;
}

- (id)init;

@end
