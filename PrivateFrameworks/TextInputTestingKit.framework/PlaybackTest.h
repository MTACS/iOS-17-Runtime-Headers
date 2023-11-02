
@interface PlaybackTest : AutocorrectionTest {
    NSArray * _expected;
    NSArray * _intended;
}

@property (nonatomic, readonly) id expected;
@property (nonatomic, readonly) id intended;

+ (id)loadFromPlaybackFile:(id)arg1;
+ (id)loadFromSentence:(id)arg1 withCatenation:(bool)arg2;
+ (id)loadFromTextInputFile:(id)arg1 withCatenation:(bool)arg2;
+ (id)sentenceToTransliteratedPlaybackTest:(id)arg1 withCatenation:(bool)arg2;
+ (id)testsWithIntendedOutput:(id)arg1 expectedOutput:(id)arg2;
+ (id)testsWithIntendedOutput:(id)arg1 expectedOutput:(id)arg2 corpusId:(id)arg3;

- (void).cxx_destruct;
- (id)expected;
- (id)intended;

@end
