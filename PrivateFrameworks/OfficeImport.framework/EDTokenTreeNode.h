
@interface EDTokenTreeNode : NSObject {
    EDTokenTreeNode * mFirstChild;
    EDTokenTreeNode * mSibling;
    unsigned int  mTokenIndex;
    int  mTokenType;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)arg1 type:(int)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)firstChild;
- (id)init;
- (id)initWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (void)setFirstChild:(id)arg1;
- (void)setSibling:(id)arg1;
- (id)sibling;
- (unsigned int)tokenIndex;

@end
