
@interface UPDetectedData : NSObject {
    struct __CFArray { } * _dataDetectorResult;
    NSString * _label;
}

@property (readonly) struct __CFArray { }*dataDetectorResult;
@property (readonly, copy) NSString *label;

- (void).cxx_destruct;
- (struct __CFArray { }*)dataDetectorResult;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 dataDetectorResult:(struct __CFArray { }*)arg2;
- (id)label;

@end
