
@interface TextToSpeech.TaggedSSML : NSObject {
    void originalSSML;
    void ssmlSnippets;
}

@property (nonatomic, copy) NSString *originalSSML;
@property (nonatomic, copy) NSArray *ssmlSnippets;

- (void).cxx_destruct;
- (id)init;
- (id)originalSSML;
- (void)setOriginalSSML:(id)arg1;
- (void)setSsmlSnippets:(id)arg1;
- (id)ssmlSnippets;

@end
