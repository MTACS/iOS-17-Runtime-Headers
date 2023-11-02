
@interface CHTokenizedTextResultToken : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    double  _alignmentScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _combinedScore;
    unsigned long long  _inputSources;
    bool  _isOriginal;
    bool  _isTransliterated;
    unsigned long long  _properties;
    double  _recognitionScore;
    NSLocale * _recognizerSourceLocale;
    NSString * _string;
    NSIndexSet * _strokeIndexes;
    long long  _substrokeCount;
    unsigned int  _wordID;
}

@property (nonatomic, readonly) double alignmentScore;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) double combinedScore;
@property (nonatomic, readonly) unsigned long long inputSources;
@property (nonatomic, readonly) bool isOriginal;
@property (nonatomic, readonly) bool isTransliterated;
@property (nonatomic, readonly) unsigned long long properties;
@property (nonatomic, readonly) double recognitionScore;
@property (nonatomic, readonly, copy) NSLocale *recognizerSourceLocale;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly, copy) NSIndexSet *strokeIndexes;
@property (nonatomic, readonly) long long substrokeCount;
@property (nonatomic, readonly) unsigned int wordID;

+ (unsigned long long)makeOriginalToken:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 recognizerSourceLocale:(id)arg8 inputSources:(unsigned long long)arg9 substrokeCount:(long long)arg10 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg11;

- (void).cxx_destruct;
- (double)alignmentScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)combinedScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)heuristicTextScore;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 recognizerSourceLocale:(id)arg8 inputSources:(unsigned long long)arg9 substrokeCount:(long long)arg10 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg11;
- (unsigned long long)inputSourceModifiersCount;
- (unsigned long long)inputSources;
- (unsigned long long)inputSources;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToToken:(id)arg1;
- (bool)isOriginal;
- (bool)isOriginal;
- (bool)isTransliterated;
- (bool)isTransliterated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)properties;
- (double)recognitionScore;
- (id)recognizerSourceLocale;
- (id)recognizerSourceLocale;
- (id)string;
- (id)strokeIndexes;
- (long long)substrokeCount;
- (unsigned int)wordID;

@end
