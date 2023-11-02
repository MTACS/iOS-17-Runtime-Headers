
@interface HFAnalyticsDiscoverTabContentViewedEvent : HFAnalyticsEvent {
    NSString * _contentID;
    NSString * _locale;
}

@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *locale;

- (void).cxx_destruct;
- (id)contentID;
- (id)initWithData:(id)arg1;
- (id)locale;
- (id)payload;
- (void)setContentID:(id)arg1;
- (void)setLocale:(id)arg1;

@end
