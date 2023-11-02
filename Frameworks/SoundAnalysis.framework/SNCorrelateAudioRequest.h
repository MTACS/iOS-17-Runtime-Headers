
@interface SNCorrelateAudioRequest : NSObject <SNAnalyzerCreating, SNRequest> {
    double  _overlapFactor;
    AVAudioFile * _referenceAudioFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double overlapFactor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createAnalyzerWithError:(id*)arg1;
- (id)initWithAudioFile:(id)arg1;
- (double)overlapFactor;
- (void)setOverlapFactor:(double)arg1;

@end
