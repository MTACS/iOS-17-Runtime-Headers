
@interface SSMLRangeConversionResult : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _convertedRange;
    NSError * _error;
    NSString * _plainString;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } convertedRange;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *plainString;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertedRange;
- (id)error;
- (id)init;
- (id)plainString;
- (void)setConvertedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setError:(id)arg1;
- (void)setPlainString:(id)arg1;

@end
