
@interface BRLTTranslationParameters : NSObject <NSSecureCoding> {
    NSString * _language;
    unsigned long long  _mode;
    bool  _partial;
    BRLTTextFormattingRanges * _textFormattingRanges;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textPositionsRange;
    bool  _useTechnicalTableIfPossible;
}

@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly) unsigned long long mode;
@property (getter=isPartial, nonatomic, readonly) bool partial;
@property (nonatomic, readonly) BRLTTextFormattingRanges *textFormattingRanges;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textPositionsRange;
@property (nonatomic, readonly) bool useTechnicalTableIfPossible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 partial:(bool)arg3 useTechnicalTable:(bool)arg4 textPositionsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 textFormattingRanges:(id)arg6;
- (bool)isPartial;
- (id)language;
- (unsigned long long)mode;
- (id)textFormattingRanges;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textPositionsRange;
- (bool)useTechnicalTableIfPossible;

@end
