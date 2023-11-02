
@interface Coherence.ObjCRLE : NSObject {
    void rle;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long rangeCount;

- (void).cxx_destruct;
- (id)description;
- (void)enumerateRangesIn:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 :(id /* block */)arg2;
- (id)init;
- (long long)rangeCount;
- (long long)rangeCountIn:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
