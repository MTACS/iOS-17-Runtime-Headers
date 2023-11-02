
@interface CKSyndicationOnboardingTailedBubble : CKPinnedConversationRichLinkBubble {
    long long  _appName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bubbleFrame;
    NSAttributedString * _bubbleText;
}

@property (nonatomic) long long appName;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bubbleFrame;
@property (nonatomic, retain) NSAttributedString *bubbleText;

- (void).cxx_destruct;
- (long long)appName;
- (double)balloonTailHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bubbleFrame;
- (id)bubbleText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAppName:(long long)arg2 withLPLinkView:(id)arg3;
- (void)layoutSubviews;
- (double)pillCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pillRect;
- (void)setAppName:(long long)arg1;
- (void)setBubbleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBubbleText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
