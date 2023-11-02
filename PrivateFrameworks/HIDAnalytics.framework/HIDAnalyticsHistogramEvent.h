
@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {
    HIDAnalyticsHistogramEventField * _field;
    bool  _isUpdated;
}

- (void).cxx_destruct;
- (void)addField:(id)arg1;
- (void)addHistogramFieldWithSegments:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; }*)arg2 count:(long long)arg3;
- (id)initWithAttributes:(id)arg1 description:(id)arg2;
- (void)setIntegerValue:(unsigned long long)arg1;
- (void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2;
- (void)setValue:(id)arg1;
- (id)value;

@end
