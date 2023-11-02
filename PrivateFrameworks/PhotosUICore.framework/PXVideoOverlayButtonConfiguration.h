
@interface PXVideoOverlayButtonConfiguration : NSObject {
    bool  _allowBackdropStatisticsSupression;
    NSString * _localizedTitle;
    long long  _style;
}

@property (nonatomic) bool allowBackdropStatisticsSupression;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (bool)allowBackdropStatisticsSupression;
- (id)init;
- (id)localizedTitle;
- (void)setAllowBackdropStatisticsSupression:(bool)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
