
@interface IRAirPlaySettings : NSObject {
    bool  _isAutoRoutingSettingEnabledInternal;
    bool  _isRoutePredictionSettingEnabledInternal;
}

@property (nonatomic) bool isAutoRoutingSettingEnabledInternal;
@property (nonatomic) bool isRoutePredictionSettingEnabledInternal;

+ (id)shared;

- (id)dumpState;
- (id)init;
- (bool)isAutoRoutingSettingEnabled;
- (bool)isAutoRoutingSettingEnabledInternal;
- (bool)isRoutePredictionSettingEnabled;
- (bool)isRoutePredictionSettingEnabledInternal;
- (void)setIsAutoRoutingSettingEnabledInternal:(bool)arg1;
- (void)setIsRoutePredictionSettingEnabledInternal:(bool)arg1;

@end
