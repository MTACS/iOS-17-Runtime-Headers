
@interface FCSportsPrivacyConfiguration : NSObject {
    double  _headlineExposureNoiseRate;
    bool  _isHeadlineExposureTrackingDisabled;
    double  _syncEventSamplingRate;
}

@property (nonatomic, readonly) double headlineExposureNoiseRate;
@property (nonatomic, readonly) bool isHeadlineExposureTrackingDisabled;
@property (nonatomic, readonly) double syncEventSamplingRate;

- (double)headlineExposureNoiseRate;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (bool)isHeadlineExposureTrackingDisabled;
- (double)syncEventSamplingRate;

@end
