
@interface HUDropInBannerItem : HUBannerItem {
    DIDevice * _device;
    HMAudioAnalysisEventBulletin * _eventBulletin;
}

@property (nonatomic, readonly) DIDevice *device;
@property (nonatomic, retain) HMAudioAnalysisEventBulletin *eventBulletin;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (id)eventBulletin;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 device:(id)arg2 eventBulletin:(id)arg3;
- (void)setEventBulletin:(id)arg1;

@end
