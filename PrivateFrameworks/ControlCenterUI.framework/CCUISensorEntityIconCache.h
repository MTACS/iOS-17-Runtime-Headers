
@interface CCUISensorEntityIconCache : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (struct CGSize { double x1; double x2; })iconSize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_imageInBundle:(id)arg1 named:(id)arg2 needsTreatment:(bool)arg3;
- (id)_init;
- (id)_keyboardSettingsIcon;
- (id)continuityCaptureIconForExtensionIdentifier:(id)arg1;
- (id)imageForEntity:(id)arg1;
- (void)preheatImageForSensorEntity:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;

@end
