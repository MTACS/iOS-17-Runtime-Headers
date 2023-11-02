
@interface CKSyndicationOnboardingLinkBalloonView : CKTranscriptPluginBalloonView {
    LPLinkMetadata * _linkMetadata;
    LPLinkView * _linkView;
}

@property (nonatomic, retain) LPLinkMetadata *linkMetadata;
@property (nonatomic, retain) LPLinkView *linkView;

+ (id)musicSpecialization;
+ (id)podcastSpecialization;
+ (id)tvSpecialization;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withURL:(id)arg2;
- (id)linkMetadata;
- (id)linkView;
- (void)setLinkMetadata:(id)arg1;
- (void)setLinkView:(id)arg1;
- (void)setPluginViewToURL:(id)arg1;

@end
