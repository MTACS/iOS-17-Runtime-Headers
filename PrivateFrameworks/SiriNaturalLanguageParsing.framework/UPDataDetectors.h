
@interface UPDataDetectors : NSObject {
    struct UPDataDetector { long long x1; struct __DDScanner {} *x2; struct __DDScanner {} *x3; struct __DDScanner {} *x4; struct __DDScanner {} *x5; struct __DDScanner {} *x6; struct __DDScanner {} *x7; } * _dataDetector;
    void * _ddUsoMapper;
}

@property (readonly) struct UPDataDetector { long long x1; struct __DDScanner {} *x2; struct __DDScanner {} *x3; struct __DDScanner {} *x4; struct __DDScanner {} *x5; struct __DDScanner {} *x6; struct __DDScanner {} *x7; }*dataDetector;
@property (readonly) void*ddUsoMapper;

- (id)_matchSpansForDetectedDataArray:(struct __CFArray { }*)arg1 label:(id)arg2;
- (struct UPDataDetector { long long x1; struct __DDScanner {} *x2; struct __DDScanner {} *x3; struct __DDScanner {} *x4; struct __DDScanner {} *x5; struct __DDScanner {} *x6; struct __DDScanner {} *x7; }*)dataDetector;
- (void*)ddUsoMapper;
- (void)dealloc;
- (id)initLoadFromDataDetectorsDirectoryPath:(id)arg1 forLocale:(id)arg2;
- (id)matchSpans:(id)arg1;
- (id)matchSpansForDetectedData:(id)arg1;
- (id)matchSpansForUtterance:(id)arg1;

@end
