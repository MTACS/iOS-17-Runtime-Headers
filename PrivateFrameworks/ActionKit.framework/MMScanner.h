
@interface MMScanner : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _currentRange;
    NSArray * _lineRanges;
    unsigned long long  _rangeIndex;
    unsigned long long  _startLocation;
    NSString * _string;
    NSMutableArray * _transactions;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } currentLineRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } currentRange;
@property (nonatomic, readonly, copy) NSArray *lineRanges;
@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long rangeIndex;
@property (nonatomic) unsigned long long startLocation;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSMutableArray *transactions;

+ (id)scannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1 lineRanges:(id)arg2;

- (void).cxx_destruct;
- (id)_lineRangesForString:(id)arg1;
- (unsigned long long)_locationOfCharacter:(unsigned short)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)advance;
- (void)advanceToNextLine;
- (bool)atBeginningOfLine;
- (bool)atEndOfLine;
- (bool)atEndOfString;
- (void)beginTransaction;
- (void)commitTransaction:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })currentLineRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })currentRange;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 lineRanges:(id)arg2;
- (id)lineRanges;
- (unsigned long long)location;
- (bool)matchString:(id)arg1;
- (unsigned short)nextCharacter;
- (id)nextWord;
- (id)nextWordWithCharactersFromSet:(id)arg1;
- (unsigned short)previousCharacter;
- (id)previousWord;
- (id)previousWordWithCharactersFromSet:(id)arg1;
- (unsigned long long)rangeIndex;
- (void)setCurrentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setRangeIndex:(unsigned long long)arg1;
- (void)setStartLocation:(unsigned long long)arg1;
- (unsigned long long)skipCharactersFromSet:(id)arg1;
- (unsigned long long)skipCharactersFromSet:(id)arg1 max:(unsigned long long)arg2;
- (unsigned long long)skipEmptyLines;
- (unsigned long long)skipIndentationUpTo:(unsigned long long)arg1;
- (unsigned long long)skipNestedBracketsWithDelimiter:(unsigned short)arg1;
- (unsigned long long)skipToEndOfLine;
- (unsigned long long)skipToLastCharacterOfLine;
- (unsigned long long)skipWhitespace;
- (unsigned long long)skipWhitespaceAndNewlines;
- (unsigned long long)startLocation;
- (id)string;
- (id)transactions;

@end
