
@interface ICTableTextFindingResult : ICTextFindingResult {
    ICAttachment * _attachment;
    NSNumber * _cellStartRangeLocation;
    NSNumber * _columnNumber;
    NSAttributedString * _findableString;
    bool  _ignoreCase;
    NSString * _queryString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeInFindableString;
    NSNumber * _rowNumber;
}

@property (nonatomic) ICAttachment *attachment;
@property (nonatomic, retain) NSNumber *cellStartRangeLocation;
@property (nonatomic, retain) NSNumber *columnNumber;
@property (nonatomic, retain) NSAttributedString *findableString;
@property (nonatomic) bool ignoreCase;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInFindableString;
@property (nonatomic, retain) NSNumber *rowNumber;

- (void).cxx_destruct;
- (id)attachment;
- (id)cellStartRangeLocation;
- (id)columnNumber;
- (long long)compare:(id)arg1;
- (id)findableString;
- (id)framesForHighlightInTextView:(id)arg1;
- (bool)ignoreCase;
- (id)queryString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInFindableString;
- (id)rowNumber;
- (void)setAttachment:(id)arg1;
- (void)setCellStartRangeLocation:(id)arg1;
- (void)setColumnNumber:(id)arg1;
- (void)setFindableString:(id)arg1;
- (void)setIgnoreCase:(bool)arg1;
- (void)setQueryString:(id)arg1;
- (void)setRangeInFindableString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRowNumber:(id)arg1;
- (id)tableAttachmentViewControllerForTextView:(id)arg1;

@end
