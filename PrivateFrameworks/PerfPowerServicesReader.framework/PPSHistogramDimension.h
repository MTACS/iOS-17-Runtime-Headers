
@interface PPSHistogramDimension : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _edges;
    bool  _isCategoryDimension;
    NSString * _metricName;
    struct { 
        double min; 
        double max; 
    }  _range;
    unsigned long long  _size;
}

@property (readonly, copy) NSArray *edges;
@property (readonly) unsigned long long extent;
@property (readonly) bool isCategoryDimension;
@property (readonly, copy) NSString *metricName;
@property (readonly) struct { double x1; double x2; } range;
@property (readonly) unsigned long long size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionary;
- (id)edges;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)extent;
- (unsigned long long)hash;
- (id)initWithBinCount:(unsigned long long)arg1 range:(struct { double x1; double x2; })arg2 metricName:(id)arg3;
- (id)initWithCategories:(id)arg1 metricName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEdges:(id)arg1 metricName:(id)arg2;
- (bool)isCategoryDimension;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistogramDimension:(id)arg1;
- (id)metricName;
- (struct { double x1; double x2; })range;
- (unsigned long long)size;

@end
