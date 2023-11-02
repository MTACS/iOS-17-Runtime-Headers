
@interface TypistKoreanHangulJamo : NSObject {
    int  _hangulJamoPosition;
    bool  _isConsonantVariant;
    bool  _isVerticalVowel;
    unsigned short  _jamo;
}

+ (id)leadingConsonants;
+ (id)trailingConsonants;
+ (id)vowels;

- (int)_getJamoType:(unsigned short)arg1 withOrderInSyllable:(unsigned long long)arg2;
- (bool)_isConsonantVariant:(unsigned short)arg1;
- (bool)_isVerticalVowel:(unsigned short)arg1;
- (id)description;
- (int)hangulJamoPosition;
- (id)initWithJamo:(unsigned short)arg1 position:(unsigned long long)arg2;
- (bool)isConsonantVariant;
- (bool)isVerticalVowel;
- (unsigned short)jamo;

@end
