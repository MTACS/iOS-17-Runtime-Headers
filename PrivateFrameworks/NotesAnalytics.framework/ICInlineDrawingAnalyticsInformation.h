
@interface ICInlineDrawingAnalyticsInformation : NSObject {
    unsigned long long  _endFingerStrokeCount;
    unsigned long long  _endPencilStrokeCount;
    long long  _lastUsedTool;
    unsigned long long  _startFingerStrokeCount;
    unsigned long long  _startPencilStrokeCount;
}

@property (nonatomic) unsigned long long endFingerStrokeCount;
@property (nonatomic) unsigned long long endPencilStrokeCount;
@property (nonatomic) long long lastUsedTool;
@property (nonatomic) unsigned long long startFingerStrokeCount;
@property (nonatomic) unsigned long long startPencilStrokeCount;

- (unsigned long long)endFingerStrokeCount;
- (unsigned long long)endPencilStrokeCount;
- (long long)lastUsedTool;
- (void)setEndFingerStrokeCount:(unsigned long long)arg1;
- (void)setEndPencilStrokeCount:(unsigned long long)arg1;
- (void)setLastUsedTool:(long long)arg1;
- (void)setStartFingerStrokeCount:(unsigned long long)arg1;
- (void)setStartPencilStrokeCount:(unsigned long long)arg1;
- (unsigned long long)startFingerStrokeCount;
- (unsigned long long)startPencilStrokeCount;

@end
