
@interface WXOAVReadState : OAVReadState {
    NSMutableDictionary * mNextVmlShapeIdToTextBoxMap;
    WDParagraph * mParagraph;
    WXReadState * mWxState;
}

- (void).cxx_destruct;
- (id)currentParagraph;
- (id)initWithWXReadState:(id)arg1;
- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)wxReadState;

@end
