
@interface UPSharedEntityResolution : NSObject {
    NSDictionary * __dataDetectorDateTimeSpansByTokenRange;
}

@property (nonatomic, readonly) NSDictionary *_dataDetectorDateTimeSpansByTokenRange;

+ (id)buildDataDetectorDateTimeSpansByTokenRange:(id)arg1;

- (void).cxx_destruct;
- (id)_dataDetectorDateTimeSpansByTokenRange;
- (id)initWithMatchingSpans:(id)arg1;
- (id)resolveSharedEntityForTokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 valueType:(id)arg2;

@end
