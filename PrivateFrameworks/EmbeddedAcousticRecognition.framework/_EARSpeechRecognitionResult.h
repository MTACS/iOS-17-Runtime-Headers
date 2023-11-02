
@interface _EARSpeechRecognitionResult : NSObject <NSCopying> {
    double  _confidence;
    NSArray * _preITNVoiceCommandInterpretations;
    struct vector<quasar::Token, std::allocator<quasar::Token>> { 
        struct Token {} *__begin_; 
        struct Token {} *__end_; 
        struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { 
            struct Token {} *__value_; 
        } __end_cap_; 
    }  _quasarPreItnTokens;
    struct vector<quasar::Token, std::allocator<quasar::Token>> { 
        struct Token {} *__begin_; 
        struct Token {} *__end_; 
        struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { 
            struct Token {} *__value_; 
        } __end_cap_; 
    }  _quasarTokens;
    NSArray * _voiceCommandInterpretations;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSArray *preITNTokens;
@property (nonatomic, readonly, copy) NSArray *preITNVoiceCommandInterpretations;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<quasar::Token' */ struct  quasarPreItnTokens; /* unknown property attribute:  std::allocator<quasar::Token>>=^{Token}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<quasar::Token' */ struct  quasarTokens; /* unknown property attribute:  std::allocator<quasar::Token>>=^{Token}}} */
@property (nonatomic, readonly, copy) NSArray *tokens;
@property (nonatomic, readonly, copy) NSArray *voiceCommandInterpretations;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })arg1 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })arg2;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })arg1 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })arg2 confidence:(double)arg3;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })arg1 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })arg2 confidence:(double)arg3 voiceCommandInterpretations:(id)arg4 preITNVoiceCommandInterpretations:(id)arg5;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)preITNTokens;
- (id)preITNVoiceCommandInterpretations;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })quasarPreItnTokens;
- (struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::allocator<quasar::Token>> { struct Token {} *x_3_1_1; } x3; })quasarTokens;
- (id)tokens;
- (id)voiceCommandInterpretations;

@end
