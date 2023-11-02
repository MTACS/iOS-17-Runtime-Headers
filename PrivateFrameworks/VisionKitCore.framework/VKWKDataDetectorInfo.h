
@interface VKWKDataDetectorInfo : NSObject {
    NSArray * _boundingQuads;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    DDScannerResult * _result;
}

@property (nonatomic, copy) NSArray *boundingQuads;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (nonatomic, retain) DDScannerResult *result;

- (void).cxx_destruct;
- (id)boundingQuads;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (id)result;
- (void)setBoundingQuads:(id)arg1;
- (void)setCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setResult:(id)arg1;

@end
