
@interface HFAnalyticsBannerInteractionEvent : HFAnalyticsEvent {
    NSNumber * _hiddenBannerCount;
    NSString * _itemClassName;
}

@property (nonatomic, retain) NSNumber *hiddenBannerCount;
@property (nonatomic, retain) NSString *itemClassName;

- (void).cxx_destruct;
- (id)hiddenBannerCount;
- (id)initWithData:(id)arg1;
- (id)itemClassName;
- (id)payload;
- (void)setHiddenBannerCount:(id)arg1;
- (void)setItemClassName:(id)arg1;

@end
