
@interface HFAnalyticsHiddenBannerEvent : HFAnalyticsEvent {
    NSNumber * _hiddenBannerCount;
    NSString * _hiddenBannerItemClassName;
    NSString * _tappedBannerItemClassName;
}

@property (nonatomic, retain) NSNumber *hiddenBannerCount;
@property (nonatomic, retain) NSString *hiddenBannerItemClassName;
@property (nonatomic, retain) NSString *tappedBannerItemClassName;

- (void).cxx_destruct;
- (id)hiddenBannerCount;
- (id)hiddenBannerItemClassName;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setHiddenBannerCount:(id)arg1;
- (void)setHiddenBannerItemClassName:(id)arg1;
- (void)setTappedBannerItemClassName:(id)arg1;
- (id)tappedBannerItemClassName;

@end
