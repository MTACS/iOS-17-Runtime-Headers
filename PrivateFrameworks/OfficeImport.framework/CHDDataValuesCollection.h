
@interface CHDDataValuesCollection : NSObject {
    bool  mContainsStringValue;
    unsigned long long  mDataValueCount;
    struct __CFDictionary { } * mIndexToDataValueMap;
    struct __CFData { } * mPackedValues;
}

- (bool)addDataPoint:(struct CHDDataPoint { unsigned long long x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; char *x_2_2_3; unsigned long long x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned long long x3; }*)arg1;
- (bool)addDataValue:(id)arg1;
- (void)cleanup;
- (bool)containsStringValue;
- (id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2;
- (unsigned long long)count;
- (struct CHDDataPoint { unsigned long long x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; char *x_2_2_3; unsigned long long x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned long long x3; }*)dataPointAtIndex:(unsigned long long)arg1;
- (struct CHDDataPoint { unsigned long long x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; char *x_2_2_3; unsigned long long x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned long long x3; }*)dataPointWithIndex:(unsigned long long)arg1;
- (id)dataValueAtIndex:(unsigned long long)arg1;
- (id)dataValueWithIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (void)finishReading;
- (id)init;
- (id)initWithDataPointCount:(unsigned long long)arg1;
- (unsigned long long)maxDataPointIndex;
- (void)resetWithDataPointCount:(unsigned long long)arg1;
- (void)setupBufferForValues:(unsigned long long)arg1;

@end
