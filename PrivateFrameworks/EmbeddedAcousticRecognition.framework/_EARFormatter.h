
@interface _EARFormatter : NSObject {
    _EAREmojiRecognition * _emojiFormatter;
    NSMutableDictionary * _emojiMetrics;
    struct unique_ptr<SpeechITN, std::default_delete<SpeechITN>> { 
        struct __compressed_pair<SpeechITN *, std::default_delete<SpeechITN>> { 
            struct SpeechITN {} *__value_; 
        } __ptr_; 
    }  _itn;
    long long  _itnCount;
    double  _itnDurationSum;
    NSString * _language;
    NSMutableArray * _recognizedEmojis;
}

@property (nonatomic, copy) NSString *language;

+ (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })convertStringsToQuasarTokens:(id)arg1;
+ (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })convertStringsToQuasarTokens:(id)arg1 offset:(unsigned int)arg2;
+ (void)initialize;
+ (bool)supportedByQuasarConfig:(id)arg1;
+ (bool)supportedByQuasarSystemConfig:(const void*)arg1;
+ (bool)useEmojiHammerWhenRecognizeEmoji:(bool)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_earEmojiRecognition;
- (id)_formattedStringWithStrings:(id)arg1 task:(id)arg2 leftContext:(id)arg3;
- (id)_formattedStringWithStrings:(id)arg1 task:(id)arg2 leftContext:(id)arg3 recognizeEmoji:(bool)arg4;
- (id)_formattedStringWithStrings:(id)arg1 task:(id)arg2 leftContext:(id)arg3 recognizeEmoji:(bool)arg4 rightContext:(id)arg5;
- (id)_formattedStringWithoutEmojiModifier:(id)arg1;
- (id)_recognizeEmojiInString:(id)arg1 alternativesOut:(id)arg2 persistEmoji:(bool)arg3;
- (void)appendNbestListWithEmojiAlternativesForFormattedTokens:(const void*)arg1 formattedTokensWithoutEmojiModifier:(const void*)arg2 formattedNBestList:(void*)arg3 formattedNBestListWithoutEmojiModifier:(void*)arg4 emojiTokenIndices:(const void*)arg5 recognizeEmoji:(bool)arg6;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })emojiAlternativesForEmojis:(id)arg1;
- (id)emojiAlternativesForFormattedTokens:(id)arg1 stringsWithoutEmojiModifier:(id)arg2 alternateNameForTokens:(id)arg3;
- (id)emojiPhraseRemoveKeyword:(id)arg1;
- (struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::hash<std::string>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })endsOfSentencePunctuationsForLanguage:(const void*)arg1;
- (id)formatWords:(id)arg1 task:(id)arg2 autoPunctuate:(bool)arg3;
- (id)formatWords:(id)arg1 task:(id)arg2 autoPunctuate:(bool)arg3 recognizeEmoji:(bool)arg4;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })formatWords:(const void*)arg1 unrepairedWordsOut:(void*)arg2;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })formatWords:(const void*)arg1 unrepairedWordsOut:(void*)arg2 task:(id)arg3;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })formatWords:(const void*)arg1 unrepairedWordsOut:(void*)arg2 task:(id)arg3 language:(id)arg4 preItnLeftContext:(const void*)arg5 separateAutoEndPunctuation:(bool)arg6 partialResults:(void*)arg7 timestampOffset:(unsigned int)arg8 zeroTimestamp:(bool)arg9 continuousListeningConfig:(struct shared_ptr<quasar::ContinuousListeningConfig> { struct ContinuousListeningConfig {} *x1; struct __shared_weak_count {} *x2; })arg10 postItnLeftContext:(const void*)arg11 itnResult:(void*)arg12 itnOverrides:(const void*)arg13 itnEnablingFlags:(unsigned short)arg14 recognizeEmoji:(bool)arg15 leftContextProvidedByClient:(bool)arg16 preItnRightContext:(const void*)arg17 emojiTokenIndices:(void*)arg18 persistEmoji:(bool)arg19 shouldHideTrailingPunctuation:(bool)arg20 isTrailingPunctuationHidden:(struct shared_ptr<bool> { bool *x1; struct __shared_weak_count {} *x2; })arg21 isFinal:(bool)arg22 choiceIdx:(int)arg23 itnCompletion:(id /* block */)arg24;
- (id)formattedRecognitionWithNBestList:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3;
- (id)formattedStringWithStrings:(id)arg1 task:(id)arg2;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })formattedTokensWithoutEmojiModifier:(const void*)arg1 emojiTokenIndices:(const void*)arg2 recognizeEmoji:(bool)arg3;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })getOrthography:(const void*)arg1;
- (id)initNcsWithModelRoot:(id)arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1;
- (id)initWithQuasarConfig:(id)arg1 language:(id)arg2;
- (id)initWithQuasarConfig:(id)arg1 overrideConfigFiles:(id)arg2;
- (id)initWithQuasarConfig:(id)arg1 overrideConfigFiles:(id)arg2 supportEmojiRecognition:(bool)arg3 language:(id)arg4;
- (id)initWithQuasarConfig:(id)arg1 overrideConfigFiles:(id)arg2 supportEmojiRecognition:(bool)arg3 language:(id)arg4 skipPathsExistCheck:(bool)arg5;
- (void)initializeItnMetrics;
- (bool)isEnableAutoPunctuation:(const void*)arg1 task:(const void*)arg2 itnEnablingFlags:(unsigned short)arg3;
- (id)language;
- (void)recognizeEmojiForTokens:(void*)arg1 emojiTokenIndices:(void*)arg2 persistEmoji:(bool)arg3 choiceIdx:(int)arg4;
- (id)recognizeEmojiInString:(id)arg1 alternativesOut:(id)arg2;
- (bool)refreshEmojiRecognizer;
- (void)setLanguage:(id)arg1;

@end
