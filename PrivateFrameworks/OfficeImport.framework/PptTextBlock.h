
@interface PptTextBlock : NSObject {
    NSMutableArray * mBookmarks;
    NSMutableArray * mHyperlinks;
    NSMutableArray * mMetaCharacterFields;
    void * mSpecialInfo;
    void * mStyleText;
    NSMutableString * mText;
    struct PptTextHeaderAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int x7; } * mTextHeader;
    void * mTextRuler;
}

- (void).cxx_destruct;
- (id)bookmarks;
- (struct PptCharRun { int x1; struct PptCharProperty { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 4; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 1; unsigned int x_2_1_9 : 1; unsigned int x_2_1_10 : 1; unsigned int x_2_1_11 : 1; unsigned int x_2_1_12 : 4; unsigned int x_2_1_13 : 1; unsigned short x_2_1_14; unsigned short x_2_1_15; unsigned short x_2_1_16; unsigned short x_2_1_17; unsigned short x_2_1_18; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_19_2_1; int x_19_2_2; } x_2_1_19; } x2; }*)characterRunAtIndex:(int)arg1;
- (int)characterRunCount;
- (id)hyperlinks;
- (id)init;
- (id)metaCharacterFields;
- (void*)paragraphRunAtIndex:(int)arg1;
- (int)paragraphRunCount;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;
- (void)readSpecialInfo:(id)arg1;
- (void)readString:(id)arg1;
- (void)readStyles:(id)arg1;
- (void)readTextBlock:(id)arg1;
- (void*)specialInfoRunAtIndex:(int)arg1;
- (int)specialInfoRunCount;
- (id)text;
- (unsigned int)textIndex;
- (void*)textRuler;
- (int)textType;
- (void)writeTextBlock:(id)arg1;

@end
