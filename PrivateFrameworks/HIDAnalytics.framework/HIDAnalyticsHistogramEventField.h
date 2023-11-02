
@interface HIDAnalyticsHistogramEventField : NSObject <HIDAnalyticsEventFieldProtocol> {
    NSString * _fieldName;
    unsigned char  _segmentCount;
    struct _HIDAnalyticsHistogramSegment { unsigned char x1; struct _HIDAnalyticsHistogramBucket {} *x2; } * _segments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fieldName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property id value;

- (void).cxx_destruct;
- (void)createBuckets:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; }*)arg1 count:(long long)arg2;
- (void)dealloc;
- (id)fieldName;
- (id)initWithAttributes:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; }*)arg2 count:(long long)arg3;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
