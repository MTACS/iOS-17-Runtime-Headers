
@interface TIOutputSummary : NSObject {
    int  _char1WordsOutput;
    int  _char2WordsOutput;
    int  _char3WordsOutput;
    int  _char4WordsOutput;
    int  _char5WordsOutput;
    int  _char6WordsOutput;
    int  _char7WordsOutput;
    int  _char8WordsOutput;
    int  _char9PlusWordsOutput;
    int  _charactersOutput;
    int  _emojisOutput;
    int  _wordsOutput;
}

@property (nonatomic) int char1WordsOutput;
@property (nonatomic) int char2WordsOutput;
@property (nonatomic) int char3WordsOutput;
@property (nonatomic) int char4WordsOutput;
@property (nonatomic) int char5WordsOutput;
@property (nonatomic) int char6WordsOutput;
@property (nonatomic) int char7WordsOutput;
@property (nonatomic) int char8WordsOutput;
@property (nonatomic) int char9PlusWordsOutput;
@property (nonatomic) int charactersOutput;
@property (nonatomic) int emojisOutput;
@property (nonatomic) int wordsOutput;

- (int)char1WordsOutput;
- (int)char2WordsOutput;
- (int)char3WordsOutput;
- (int)char4WordsOutput;
- (int)char5WordsOutput;
- (int)char6WordsOutput;
- (int)char7WordsOutput;
- (int)char8WordsOutput;
- (int)char9PlusWordsOutput;
- (int)charactersOutput;
- (int)emojisOutput;
- (void)setChar1WordsOutput:(int)arg1;
- (void)setChar2WordsOutput:(int)arg1;
- (void)setChar3WordsOutput:(int)arg1;
- (void)setChar4WordsOutput:(int)arg1;
- (void)setChar5WordsOutput:(int)arg1;
- (void)setChar6WordsOutput:(int)arg1;
- (void)setChar7WordsOutput:(int)arg1;
- (void)setChar8WordsOutput:(int)arg1;
- (void)setChar9PlusWordsOutput:(int)arg1;
- (void)setCharactersOutput:(int)arg1;
- (void)setEmojisOutput:(int)arg1;
- (void)setWordsOutput:(int)arg1;
- (int)wordsOutput;

@end
