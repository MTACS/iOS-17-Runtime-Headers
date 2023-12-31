
@interface WDBlock : NSObject {
    WDText * mText;
}

- (int)blockType;
- (void)clearProperties;
- (id)description;
- (id)document;
- (id)init;
- (id)initWithText:(id)arg1;
- (bool)isEmpty;
- (id)newRunIterator;
- (id)runIterator;
- (id)text;
- (int)textType;

@end
