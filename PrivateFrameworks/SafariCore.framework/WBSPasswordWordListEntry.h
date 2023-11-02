
@interface WBSPasswordWordListEntry : NSObject {
    unsigned long long  _guessesRequired;
    bool  _sensitive;
    NSString * _word;
    NSString * _wordListIdentifier;
}

@property (nonatomic, readonly) unsigned long long guessesRequired;
@property (getter=isSensitive, nonatomic, readonly) bool sensitive;
@property (nonatomic, readonly, copy) NSString *word;
@property (nonatomic, readonly, copy) NSString *wordListIdentifier;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)guessesRequired;
- (id)initWithWord:(id)arg1 isSensitive:(bool)arg2 wordListIdentifier:(id)arg3 guessesRequired:(unsigned long long)arg4;
- (bool)isSensitive;
- (id)word;
- (id)wordListIdentifier;

@end
