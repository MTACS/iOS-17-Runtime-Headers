
@interface CIEnhancementHistogram : NSObject {
    double  hist;
}

+ (id)histogramFromData:(const double*)arg1;
+ (id)histogramFromDoubleData:(const double*)arg1;
+ (id)histogramFromFloatData:(const float*)arg1;

- (const double*)values;

@end
