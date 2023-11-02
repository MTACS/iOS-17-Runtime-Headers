
@interface ICParagraphInfoSortInfo : NSObject {
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    ICTrackedParagraph * _trackedParagraph;
}

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (nonatomic, retain) ICTrackedParagraph *trackedParagraph;

- (void).cxx_destruct;
- (id)attributedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)setAttributedString:(id)arg1;
- (void)setCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTrackedParagraph:(id)arg1;
- (id)trackedParagraph;

@end
