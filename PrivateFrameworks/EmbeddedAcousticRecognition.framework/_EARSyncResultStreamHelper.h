
@interface _EARSyncResultStreamHelper : NSObject <_EARSpeechRecognitionResultStream> {
    NSError * _error;
    NSObject<OS_dispatch_semaphore> * _finishSemaphore;
    NSArray * _results;
    NSMutableArray * _taggedResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *taggedResults;

- (void).cxx_destruct;
- (id)addPartialFinalTag:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 result:(id)arg2;
- (id)error;
- (id)init;
- (id)initWithTagResults:(bool)arg1;
- (id)results;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (id)taggedResults;
- (void)waitForCompletion;

@end
