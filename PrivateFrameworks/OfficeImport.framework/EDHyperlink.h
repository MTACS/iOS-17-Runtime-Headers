
@interface EDHyperlink : NSObject {
    EDString * mDescriptionText;
    EDString * mDosPath;
    EDString * mPath;
    EDReference * mReference;
    EDString * mTextMark;
    EDString * mToolTip;
    int  mType;
}

+ (id)hyperlink;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionText;
- (id)dosPath;
- (id)path;
- (id)reference;
- (void)setDescriptionText:(id)arg1;
- (void)setDosPath:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setReference:(id)arg1;
- (void)setTextMark:(id)arg1;
- (void)setToolTip:(id)arg1;
- (void)setType:(int)arg1;
- (id)textMark;
- (id)toolTip;
- (int)type;

@end
