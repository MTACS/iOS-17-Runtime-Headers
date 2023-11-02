
@interface TIDPNgramRecorder : TIDPNgramRecorderCascading {
    bool  _shouldDonateNgramSampleRandomly;
}

@property (nonatomic) bool shouldDonateNgramSampleRandomly;

+ (void)enumerateNgramsFromSession:(id)arg1 n:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;

- (id)_normalizedWordEntryStringForWordEntry:(id)arg1;
- (id)delegate;
- (id)initWithTypingSession:(id)arg1 aligned:(id)arg2 n:(unsigned long long)arg3 shouldDonateNgramSampleRandomly:(bool)arg4;
- (id)randomRecords;
- (id)randomRecordsLimitedByCount:(unsigned long long)arg1;
- (id)recordingKey;
- (id)records;
- (bool)report;
- (void)setShouldDonateNgramSampleRandomly:(bool)arg1;
- (bool)shouldDonateNgramSampleRandomly;

@end
