
@interface PKDataDetectorItem : PKDetectionItem

@property (nonatomic, readonly) struct __DDResult { }*coreResult;
@property (nonatomic, readonly) DDScannerResult *scannerResult;

+ (id)dataDetectorItemWithQueryItem:(id)arg1 sessionManager:(id)arg2;

- (id)_baselinePath;
- (struct __DDResult { }*)coreResult;
- (id)drawing;
- (bool)isEqual:(id)arg1;
- (id)scannerResult;
- (id)strokeColor;

@end
