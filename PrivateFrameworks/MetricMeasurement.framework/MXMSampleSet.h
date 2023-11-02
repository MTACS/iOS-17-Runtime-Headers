
@interface MXMSampleSet : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding> {
    NSMutableDictionary * _attributesMap;
    NSArray * _cachedSamples;
    struct { unsigned long long x1; unsigned long long x2; } * _index;
    MXMSampleTag * _tag;
    MXMSampleTimeSeries * _timeIndex;
    void * _underlyingBuffer;
    long long  _underlyingBufferLength;
    NSUnit * _unit;
}

@property (readonly, copy) NSSet *attributes;
@property (nonatomic, readonly) NSMutableDictionary *attributesMap;
@property (retain) NSArray *cachedSamples;
@property (nonatomic, readonly) MXMSample *distance;
@property (readonly) double*doubleValues;
@property (readonly) double*firstDoubleValue;
@property (nonatomic, readonly) MXMSample *geoMean;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; }*index;
@property (readonly) double*lastDoubleValue;
@property (readonly) unsigned long long length;
@property (nonatomic, readonly) MXMSample *max;
@property (nonatomic, readonly) MXMSample *min;
@property (nonatomic, readonly) MXMSampleSet *range;
@property (nonatomic, readonly) MXMSample *relativeStandardDeviation;
@property (readonly, copy) NSArray *samples;
@property (nonatomic, readonly) MXMSample *standardDeviation;
@property (nonatomic, readonly) MXMSample *sum;
@property (readonly) MXMSampleTag *tag;
@property (readonly, retain) MXMSampleTimeSeries *timeIndex;
@property (nonatomic) void*underlyingBuffer;
@property (nonatomic) long long underlyingBufferLength;
@property (readonly) NSUnit *unit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendAttribute:(id)arg1;
- (void)_appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2;
- (void)_appendSample:(id)arg1;
- (void)_appendSet:(id)arg1;
- (void)_prepareUnderlyingBufferSizeWithAdditionalBytes:(unsigned long long)arg1;
- (id)attributeWithName:(id)arg1;
- (id)attributes;
- (id)attributesMap;
- (id)cachedSamples;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)distance;
- (double*)doubleValues;
- (void)encodeWithCoder:(id)arg1;
- (double*)firstDoubleValue;
- (id)geoMean;
- (struct { unsigned long long x1; unsigned long long x2; }*)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 unit:(id)arg2 attributes:(id)arg3;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 doubleValues:(double*)arg5 length:(unsigned long long)arg6;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 values:(void*)arg5 length:(unsigned long long)arg6 valueSize:(unsigned long long)arg7;
- (double*)lastDoubleValue;
- (unsigned long long)length;
- (id)max;
- (id)min;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)range;
- (id)relativeStandardDeviation;
- (id)sampleWithIndex:(unsigned long long)arg1;
- (id)samples;
- (void)setCachedSamples:(id)arg1;
- (void)setIndex:(struct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)setUnderlyingBuffer:(void*)arg1;
- (void)setUnderlyingBufferLength:(long long)arg1;
- (id)standardDeviation;
- (id)sum;
- (id)tag;
- (id)timeIndex;
- (void*)underlyingBuffer;
- (long long)underlyingBufferLength;
- (id)unit;

@end
