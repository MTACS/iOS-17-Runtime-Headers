
@interface UPDataDetectorSpan : UPSpan {
    struct __DDResult { } * _dataDetectorResult;
    USOSerializedGraph * _usoGraph;
}

@property (readonly) struct __DDResult { }*dataDetectorResult;
@property (readonly) USOSerializedGraph *usoGraph;

- (void).cxx_destruct;
- (struct __DDResult { }*)dataDetectorResult;
- (id)getUsoGraphPrintedForm;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 category:(id)arg2 dataDetectorResult:(struct __DDResult { }*)arg3;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 category:(id)arg2 dataDetectorResult:(struct __DDResult { }*)arg3 usoGraph:(id)arg4;
- (id)usoGraph;

@end
