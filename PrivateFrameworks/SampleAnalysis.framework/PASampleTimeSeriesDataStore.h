
@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {
    SASampleStore * _sampleStore;
}

@property (retain) SASampleStore *sampleStore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleStore:(id)arg1;
- (id)sampleStore;
- (void)setSampleStore:(id)arg1;

@end
