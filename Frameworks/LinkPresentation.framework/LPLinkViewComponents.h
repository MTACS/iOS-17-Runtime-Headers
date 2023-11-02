
@interface LPLinkViewComponents : NSObject {
    LPImageView * _backgroundImage;
    LPCaptionBarView * _captionBar;
    LPContactsBadgeView * _contactsBadge;
    LPDomainNameIndicator * _domainNameIndicator;
    LPComponentView * _media;
    LPBackgroundColorView * _mediaBackground;
    LPCaptionBarView * _mediaBottomCaptionBar;
    LPCaptionBarView * _mediaTopCaptionBar;
    LPQuoteView * _quote;
}

@property (nonatomic, retain) LPImageView *backgroundImage;
@property (nonatomic, retain) LPCaptionBarView *captionBar;
@property (nonatomic, retain) LPContactsBadgeView *contactsBadge;
@property (nonatomic, retain) LPDomainNameIndicator *domainNameIndicator;
@property (nonatomic, retain) LPComponentView *media;
@property (nonatomic, retain) LPBackgroundColorView *mediaBackground;
@property (nonatomic, retain) LPCaptionBarView *mediaBottomCaptionBar;
@property (nonatomic, retain) LPCaptionBarView *mediaTopCaptionBar;
@property (nonatomic, retain) LPQuoteView *quote;

- (void).cxx_destruct;
- (void)applyToAllViews:(id /* block */)arg1;
- (id)backgroundImage;
- (id)captionBar;
- (id)contactsBadge;
- (id)domainNameIndicator;
- (id)media;
- (id)mediaBackground;
- (id)mediaBottomCaptionBar;
- (id)mediaTopCaptionBar;
- (id)quote;
- (void)setBackgroundImage:(id)arg1;
- (void)setCaptionBar:(id)arg1;
- (void)setContactsBadge:(id)arg1;
- (void)setDomainNameIndicator:(id)arg1;
- (void)setMedia:(id)arg1;
- (void)setMediaBackground:(id)arg1;
- (void)setMediaBottomCaptionBar:(id)arg1;
- (void)setMediaTopCaptionBar:(id)arg1;
- (void)setQuote:(id)arg1;

@end
