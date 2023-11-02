
@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell {
    long long  _animationPauseReasons;
    CKBalloonView * _balloonView;
}

@property (nonatomic) long long animationPauseReasons;
@property (nonatomic, retain) CKBalloonView *balloonView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_balloonViewForChatItem:(id)arg1;
- (void)addFilter:(id)arg1;
- (long long)animationPauseReasons;
- (id)balloonView;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAnimationPauseReasons:(long long)arg1;
- (void)setBalloonView:(id)arg1;

@end
