
@interface INFSentenceContext : NSObject {
    unsigned long long  _gender;
    NSNumber * _number;
}

@property (nonatomic) unsigned long long gender;
@property (nonatomic, copy) NSNumber *number;

+ (id)sentenceContext;

- (void).cxx_destruct;
- (id)combinedWithContext:(id)arg1;
- (unsigned long long)gender;
- (id)number;
- (void)setGender:(unsigned long long)arg1;
- (void)setNumber:(id)arg1;

@end
