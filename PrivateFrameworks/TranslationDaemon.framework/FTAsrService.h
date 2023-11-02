
@interface FTAsrService : OspreyChannel

- (void)performCorrectionsValidator:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performErrorBlamer:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performGraphemeToPhoneme:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performItn:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performKeywordFinder:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performPostItnHammer:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)performRecognitionWithDelegate:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performTextNormalization:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
