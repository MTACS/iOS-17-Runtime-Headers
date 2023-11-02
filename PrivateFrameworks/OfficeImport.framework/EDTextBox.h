
@interface EDTextBox : NSObject {
    EDAlignmentInfo * mAlignmentInfo;
    EDProtection * mProtection;
    EDString * mText;
}

+ (id)textBox;

- (void).cxx_destruct;
- (id)alignmentInfo;
- (id)description;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setProtection:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
