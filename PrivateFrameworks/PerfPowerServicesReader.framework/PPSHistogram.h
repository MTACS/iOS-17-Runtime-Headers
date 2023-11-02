
@interface PPSHistogram : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _dimensions;
    struct unique_ptr<pps::Histogram_Internal, std::default_delete<pps::Histogram_Internal>> { 
        struct __compressed_pair<pps::Histogram_Internal *, std::default_delete<pps::Histogram_Internal>> { 
            struct Histogram_Internal {} *__value_; 
        } __ptr_; 
    }  _histogramPtr;
}

@property (readonly, copy) NSArray *dimensions;
@property (readonly, copy) NSArray *metrics;
@property (readonly) unsigned long long rank;
@property (readonly) unsigned long long size;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counts:(bool)arg1;
- (id)createArrayFromDimensionIdx:(unsigned long long)arg1 withFlowBins:(bool)arg2;
- (id)debugDescription;
- (id)description;
- (id)dictionary;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indicesFor:(id)arg1;
- (id)initWithBinCount:(unsigned long long)arg1 range:(struct { double x1; double x2; })arg2 metricName:(id)arg3;
- (id)initWithBinCount:(unsigned long long)arg1 range:(struct { double x1; double x2; })arg2 metricName:(id)arg3 samples:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(id)arg1;
- (id)initWithHistogram:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistogram:(id)arg1;
- (id)metrics;
- (unsigned long long)rank;
- (void)recordSample:(id)arg1;
- (void)reset;
- (unsigned long long)size;
- (unsigned long long)sum:(bool)arg1;

@end
