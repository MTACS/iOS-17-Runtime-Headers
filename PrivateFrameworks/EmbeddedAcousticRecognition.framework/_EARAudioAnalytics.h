
@interface _EARAudioAnalytics : NSObject <NSCopying> {
    NSDictionary * _acousticFeatures;
    double  _snr;
    NSDictionary * _speechRecognitionFeatures;
}

@property (nonatomic, readonly, copy) NSDictionary *acousticFeatures;
@property (nonatomic, readonly) double snr;
@property (nonatomic, readonly, copy) NSDictionary *speechRecognitionFeatures;

- (void).cxx_destruct;
- (id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 snr:(double)arg3;
- (id)acousticFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)snr;
- (id)speechRecognitionFeatures;

@end
