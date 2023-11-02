
@interface PDFTextRange : UITextRange {
    PDFTextPosition * _end;
    PDFTextPosition * _start;
}

+ (id)textRangeFromSelection:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)end;
- (id)initFromPos:(id)arg1 toPos:(id)arg2;
- (bool)isEmpty;
- (id)start;

@end
