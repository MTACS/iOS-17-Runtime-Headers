
@interface G2PObjc : NSObject {
    void CODEC_OFFSET;
    void DECODE_SYM_SIZE;
    void MAX_INPUT_LEN;
    void MAX_OUTPUT_LEN;
    void config;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void model;
}

- (void).cxx_destruct;
- (id)getPhrasePronounciationWithPhrase:(id)arg1 wordSep:(id)arg2 prefixWithPhrase:(bool)arg3;
- (id)getPronounciationWithWord:(id)arg1;
- (id)init;
- (void)setup;

@end
