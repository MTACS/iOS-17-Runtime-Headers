
@interface HFAnalyticsAccessorySettingsVisitEvent : HFAnalyticsEvent {
    bool  _isHomePod;
    bool  _isMediaAccessory;
    HFItem * _sourceItem;
}

@property (nonatomic) bool isHomePod;
@property (nonatomic) bool isMediaAccessory;
@property (nonatomic, retain) HFItem *sourceItem;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (bool)isHomePod;
- (bool)isMediaAccessory;
- (id)payload;
- (void)setIsHomePod:(bool)arg1;
- (void)setIsMediaAccessory:(bool)arg1;
- (void)setSourceItem:(id)arg1;
- (id)sourceItem;

@end
