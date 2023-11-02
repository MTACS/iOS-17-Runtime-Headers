
@interface PUWorkaroundSettings : PXSettings {
    bool  _addRemoveVideoLayer;
    bool  _shouldWorkAround54502886;
}

@property (nonatomic) bool addRemoveVideoLayer;
@property (nonatomic) bool shouldWorkAround54502886;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)addRemoveVideoLayer;
- (id)parentSettings;
- (void)setAddRemoveVideoLayer:(bool)arg1;
- (void)setDefaultValues;
- (void)setShouldWorkAround54502886:(bool)arg1;
- (bool)shouldWorkAround54502886;

@end
