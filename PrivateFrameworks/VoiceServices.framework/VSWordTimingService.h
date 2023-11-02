
@interface VSWordTimingService : NSObject {
    NSDictionary * _wordTimings;
}

@property (nonatomic, retain) NSDictionary *wordTimings;

- (void).cxx_destruct;
- (id)estimatedTTSWordTimingForText:(id)arg1 withLanguage:(id)arg2 voiceName:(id)arg3;
- (void)setWordTimings:(id)arg1;
- (id)timingInfosFrom:(id)arg1 withText:(id)arg2;
- (id)timingPlistForLanguage:(id)arg1;
- (id)wordTimings;

@end
