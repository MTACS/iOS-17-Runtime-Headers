
@interface CKAcknowledgmentBalloonView : CKBalloonView {
    long long  _coloredPart;
    CKAcknowledgmentGlyphView * _glyphView;
    unsigned long long  _stackCount;
}

@property (nonatomic) long long coloredPart;
@property (nonatomic, retain) CKAcknowledgmentGlyphView *glyphView;
@property (nonatomic) unsigned long long stackCount;

- (void).cxx_destruct;
- (long long)coloredPart;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;
- (id)glyphView;
- (void)prepareForReuse;
- (void)setColoredPart:(long long)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setStackCount:(unsigned long long)arg1;
- (unsigned long long)stackCount;

@end
