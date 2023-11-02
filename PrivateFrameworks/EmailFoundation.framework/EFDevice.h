
@interface EFDevice : NSObject <EFLoggable> {
    NSUUID * _identifier;
    bool  _isInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property bool isInternal;
@property (readonly) bool isRunningNative;
@property (readonly) NSString *platformName;
@property (readonly) Class superclass;

+ (id)currentDevice;
+ (void)executeWithDeviceIsExternal:(id /* block */)arg1;
+ (void)executeWithDeviceIsInternal:(id /* block */)arg1;
+ (id)log;
+ (void)setCurrentDevice:(id)arg1;
+ (id)testingDeviceWithInternal:(bool)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)identifier;
- (bool)isAppleSilicon;
- (bool)isInternal;
- (bool)isPlatform:(long long)arg1;
- (bool)isRunningNative;
- (id)platformName;
- (void)setIdentifier:(id)arg1;
- (void)setIsInternal:(bool)arg1;

@end
