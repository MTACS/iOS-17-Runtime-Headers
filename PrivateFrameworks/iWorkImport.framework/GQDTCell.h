
@interface GQDTCell : NSObject {
    unsigned short  mColumnIndex;
    unsigned short  mColumnSpan;
    unsigned short  mRowIndex;
    unsigned short  mRowSpan;
    GQDSStyle * mStyle;
}

- (id)cellStyle;
- (unsigned short)columnIndex;
- (unsigned short)columnSpan;
- (void)dealloc;
- (void)incrementColumnSpan;
- (int)readAttributesForBaseCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (int)readAttributesForBaseTabularCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (int)readBaseAttributesForBaseCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (unsigned short)rowIndex;
- (unsigned short)rowSpan;
- (void)setCellStyle:(id)arg1;

@end
