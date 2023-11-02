
@interface CRCodingUtilities : NSObject

+ (void)appendBool:(bool)arg1 toData:(id)arg2;
+ (void)appendCGFloat:(double)arg1 toData:(id)arg2;
+ (void)appendCodable:(id)arg1 toData:(id)arg2;
+ (void)appendFloat:(float)arg1 toData:(id)arg2;
+ (void)appendInteger:(long long)arg1 toData:(id)arg2;
+ (void)appendPoint:(struct CGPoint { double x1; double x2; })arg1 toData:(id)arg2;
+ (void)appendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toData:(id)arg2;
+ (void)appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toData:(id)arg2;
+ (void)appendSize:(struct CGSize { double x1; double x2; })arg1 toData:(id)arg2;
+ (void)appendUInteger:(unsigned long long)arg1 toData:(id)arg2;
+ (id)arrayFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2 objectProviderBlock:(id /* block */)arg3;
+ (bool)boolFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (double)cgFloatFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (id)ddScannerResultFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (id)encodingDataForBool:(bool)arg1;
+ (id)encodingDataForCGFloat:(double)arg1;
+ (id)encodingDataForCodable:(id)arg1;
+ (id)encodingDataForFloat:(float)arg1;
+ (id)encodingDataForInteger:(long long)arg1;
+ (id)encodingDataForPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)encodingDataForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)encodingDataForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)encodingDataForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)encodingDataForUInteger:(unsigned long long)arg1;
+ (float)floatFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (long long)integerFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (id)objectDataFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (struct CGPoint { double x1; double x2; })pointFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (struct CGSize { double x1; double x2; })sizeFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (id)stringFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;
+ (unsigned long long)unsignedIntegerFromEncodingData:(id)arg1 offset:(unsigned long long*)arg2;

@end
