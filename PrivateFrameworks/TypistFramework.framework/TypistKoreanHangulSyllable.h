
@interface TypistKoreanHangulSyllable : NSObject {
    bool  _hasConsonantVariants;
    unsigned short  _syllable;
    int  _syllableStructure;
    NSMutableArray * jamosInSyllable;
}

@property (nonatomic) unsigned short syllable;

+ (id)decomposeSyllableForScribble:(unsigned short)arg1;
+ (bool)isKoreanSyllable:(unsigned short)arg1;

- (void).cxx_destruct;
- (int)_determineSyllableStructure:(unsigned long long)arg1 vowelPositionType:(int)arg2;
- (bool)_hasConsonantVariants:(id)arg1;
- (bool)hasConsonantVariants;
- (id)initWithSyllable:(unsigned short)arg1;
- (id)jamos;
- (void)setSyllable:(unsigned short)arg1;
- (unsigned short)syllable;
- (int)syllableStructure;

@end
