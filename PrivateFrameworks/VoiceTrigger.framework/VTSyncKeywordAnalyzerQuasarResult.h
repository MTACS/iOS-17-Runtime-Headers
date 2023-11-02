
@interface VTSyncKeywordAnalyzerQuasarResult : NSObject {
    double  _triggerConfidence;
}

@property (nonatomic) double triggerConfidence;

- (id)description;
- (id)initWithConfidence:(double)arg1;
- (void)setTriggerConfidence:(double)arg1;
- (double)triggerConfidence;

@end
