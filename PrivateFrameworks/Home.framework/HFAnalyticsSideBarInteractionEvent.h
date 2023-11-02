
@interface HFAnalyticsSideBarInteractionEvent : HFAnalyticsEvent {
    NSString * _deviceOrientationStr;
    NSString * _itemClassName;
}

@property (nonatomic, retain) NSString *deviceOrientationStr;
@property (nonatomic, retain) NSString *itemClassName;

- (void).cxx_destruct;
- (id)deviceOrientationStr;
- (id)initWithData:(id)arg1;
- (id)itemClassName;
- (id)payload;
- (void)setDeviceOrientationStr:(id)arg1;
- (void)setItemClassName:(id)arg1;

@end
