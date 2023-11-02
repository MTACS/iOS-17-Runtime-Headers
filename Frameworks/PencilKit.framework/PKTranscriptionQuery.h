
@interface PKTranscriptionQuery : PKQuery {
    NSString * _transcription;
    CHTranscriptionQuery * _transcriptionQuery;
}

@property (nonatomic, readonly) NSString *transcription;
@property (nonatomic, retain) CHTranscriptionQuery *transcriptionQuery;

- (void).cxx_destruct;
- (id)contextualTextResultsForContextStrokes:(id)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithRecognitionSessionManager:(id)arg1;
- (void)pause;
- (void)setTranscriptionQuery:(id)arg1;
- (void)start;
- (void)teardown;
- (id)transcription;
- (id)transcriptionQuery;

@end
