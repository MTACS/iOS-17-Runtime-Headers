
@interface PMState : CMState {
    OADTablePartStyle * mCurrentRowStyle;
    CMOutlineState * mListState;
}

- (void).cxx_destruct;
- (id)currentRowStyle;
- (id)init;
- (id)listState;
- (void)setCurrentRowStyle:(id)arg1;

@end
