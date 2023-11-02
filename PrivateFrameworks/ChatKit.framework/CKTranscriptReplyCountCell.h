
@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell {
    double  _countAlpha;
}

@property (nonatomic) double countAlpha;

- (void)_fadeInLabelAtStartTime:(double)arg1 completion:(id /* block */)arg2;
- (void)addFilter:(id)arg1;
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (double)countAlpha;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setCountAlpha:(double)arg1;
- (bool)shouldHideDuringDarkFSM;
- (bool)wantsDrawerLayout;

@end
