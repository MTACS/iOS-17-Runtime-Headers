
@interface PPSHistogramRequest : PPSDataRequest <NSSecureCoding> {
    NSArray * _dimensions;
}

@property (readonly) NSArray *dimensions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(id)arg1 predicate:(id)arg2 timeFilter:(id)arg3;

@end
