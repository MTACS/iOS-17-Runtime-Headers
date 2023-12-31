
@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })calculateScanRangeForString:(id)arg1 changedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)detectorIdentifier;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })expandValidRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2;
+ (void)initURLCharacterSets;
+ (id)newArrayByScanningString:(id)arg1 scanRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)newURLFromString:(id)arg1;
+ (id)scanString:(id)arg1 scanRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (void)setInvalidURLSchemes:(id)arg1;

@end
