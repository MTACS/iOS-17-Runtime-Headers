
@interface DDMatch : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _matchedRange;
    NSString * _matchedString;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } matchedRange;
@property (nonatomic, readonly) NSString *matchedString;

+ (id)resultWithDDScannerResult:(id)arg1;
+ (id)resultWithDDScannerResult:(id)arg1 originalString:(id)arg2;

- (void).cxx_destruct;
- (void)commonInitWithDDScannerResult:(id)arg1 originalString:(id)arg2;
- (id)initWithDDScannerResult:(id)arg1;
- (id)initWithDDScannerResult:(id)arg1 originalString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchedRange;
- (id)matchedString;

@end
