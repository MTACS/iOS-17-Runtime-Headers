
@interface PptHyperlinkBlock : NSObject {
    ESDContainer * mInteractiveInfoContainerHolder;
    ESDObject * mTxInteractiveInfoAtomHolder;
}

- (void).cxx_destruct;
- (id)interactiveInfoContainerHolder;
- (void)setInteractiveInfoContainerHolder:(id)arg1;
- (void)setTxInteractiveInfoAtomHolder:(id)arg1;
- (struct PptTxInteracInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int x7; int x8; }*)txtInteractiveInfoAtom;

@end
