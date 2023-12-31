
@interface EDPhoneticRun : NSObject {
    unsigned int  mBaseCharCount;
    unsigned int  mBaseCharIndex;
    unsigned int  mCharIndex;
}

- (void)adjustIndex:(unsigned long long)arg1;
- (unsigned int)charBaseCount;
- (unsigned int)charBaseIndex;
- (unsigned int)charIndex;
- (id)description;
- (id)init;
- (void)setCharBaseCount:(unsigned int)arg1;
- (void)setCharBaseIndex:(unsigned int)arg1;
- (void)setCharIndex:(unsigned int)arg1;

@end
