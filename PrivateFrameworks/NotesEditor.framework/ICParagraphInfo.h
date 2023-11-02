
@interface ICParagraphInfo : NSObject {
    unsigned long long  _blockQuoteLevel;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    NSMutableArray * _children;
    ICTTParagraphStyle * _paragraphStyle;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeIncludingChildren;
}

@property (nonatomic, readonly) unsigned long long blockQuoteLevel;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, readonly) unsigned long long indent;
@property (nonatomic, retain) ICTTParagraphStyle *paragraphStyle;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeIncludingChildren;
@property (nonatomic, readonly) unsigned int style;

- (void).cxx_destruct;
- (unsigned long long)blockQuoteLevel;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (id)children;
- (unsigned long long)indent;
- (id)paragraphStyle;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeIncludingChildren;
- (void)setCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setChildren:(id)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setRangeIncludingChildren:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned int)style;

@end
