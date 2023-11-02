
@interface TIDPWordRecord : NSObject {
    HCHuffmanCoder * _coder;
    NSString * _word;
    NSNumber * _wordPosition;
}

@property (nonatomic, readonly) NSString *cleanedWord;
@property (nonatomic, readonly) NSNumber *codedWord;
@property (nonatomic, readonly) NSString *codedWordAsString;
@property (nonatomic, retain) HCHuffmanCoder *coder;
@property (nonatomic, readonly) NSUUID *coderVersion;
@property (nonatomic, copy) NSString *word;
@property (nonatomic, retain) NSNumber *wordPosition;

+ (id)word:(id)arg1;
+ (id)word:(id)arg1 atPosition:(id)arg2;
+ (id)word:(id)arg1 atPosition:(id)arg2 coder:(id)arg3;

- (void).cxx_destruct;
- (id)cleanedWord;
- (id)codedWord;
- (id)codedWordAsString;
- (id)coder;
- (id)coderVersion;
- (void)setCoder:(id)arg1;
- (void)setWord:(id)arg1;
- (void)setWordPosition:(id)arg1;
- (id)toDPWordRecord;
- (id)word;
- (id)wordPosition;

@end
