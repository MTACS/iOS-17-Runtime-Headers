
@interface SSMLRangeConverterInternal : NSObject {
    void $__lazy_storage_$_converter;
    void $__lazy_storage_$_plainString;
    void ssml;
}

@property (nonatomic, copy) NSString *plainString;
@property (nonatomic, copy) NSString *ssml;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSSML:(id)arg1;
- (id)plainString;
- (void)setPlainString:(id)arg1;
- (void)setSsml:(id)arg1;
- (id)ssml;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })stringRangeFrom:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
