
@interface WDText : NSObject {
    NSMutableArray * mBlocks;
    WDDocument * mDocument;
    WDTableCell * mTableCell;
    int  mTextType;
}

@property (readonly) WDDocument *document;
@property (readonly) WDTableCell *tableCell;

- (void).cxx_destruct;
- (void)addBlock:(id)arg1;
- (id)addParagraph;
- (id)addParagraphAtIndex:(int)arg1;
- (id)addTable;
- (id)addTableAtIndex:(int)arg1;
- (id)blockAt:(unsigned long long)arg1;
- (unsigned long long)blockCount;
- (id)blockIterator;
- (id)blocks;
- (id)content;
- (id)description;
- (id)document;
- (id)firstParagraph;
- (unsigned long long)indexOfBlock:(id)arg1;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (bool)isEmpty;
- (id)lastBlock;
- (id)newBlockIterator;
- (id)newRunIterator;
- (id)paragraphs;
- (void)removeLastBlock;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)runIterator;
- (id)tableCell;
- (int)tableNestingLevel;
- (int)textType;

@end
