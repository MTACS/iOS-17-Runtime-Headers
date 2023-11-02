
@interface MXMMetric : NSObject <MXMInstrumental, MXMProbeDelegate, NSSecureCoding> {
    NSString * _build;
    MXMMutableSampleData * _data;
    MXMSampleFilter * _filter;
    NSString * _identifier;
    unsigned long long  _preferredSampleMode;
    MXMProbe * _probe;
    NSString * _version;
}

@property (nonatomic, readonly) unsigned long long _sampleMode;
@property (nonatomic, readonly) bool _shouldAlwaysWrapInProxy;
@property (nonatomic, readonly) bool _shouldConstructProbe;
@property (nonatomic, readonly) bool _shouldNeverWrapInProxy;
@property (nonatomic, readonly) NSString *build;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MXMSampleFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) MXMInstrument *instrument;
@property (nonatomic) unsigned long long preferredSampleMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_constructProbe;
- (id)_getProbe;
- (unsigned long long)_sampleMode;
- (bool)_shouldAlwaysWrapInProxy;
- (bool)_shouldConstructProbe;
- (bool)_shouldNeverWrapInProxy;
- (bool)_shouldWrapInProxy;
- (id)build;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(id)arg3;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(id)arg3;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (bool)harvestData:(id*)arg1 error:(id*)arg2;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)instrument;
- (unsigned long long)preferredSampleMode;
- (bool)prepareWithOptions:(id)arg1 error:(id*)arg2;
- (void)probeDidUpdate:(id)arg1 data:(id)arg2 stop:(bool*)arg3;
- (void)setFilter:(id)arg1;
- (void)setPreferredSampleMode:(unsigned long long)arg1;
- (id)version;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (void)willStop;

@end
