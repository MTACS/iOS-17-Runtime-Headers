
@interface EARAudioAnalytics : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _acousticFeatures;
    double  _snr;
    NSDictionary * _speechRecognitionFeatures;
}

@property (nonatomic, readonly, copy) NSDictionary *acousticFeatures;
@property (nonatomic, readonly) double snr;
@property (nonatomic, readonly, copy) NSDictionary *speechRecognitionFeatures;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acousticFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnalytics:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)snr;
- (id)speechRecognitionFeatures;

@end
