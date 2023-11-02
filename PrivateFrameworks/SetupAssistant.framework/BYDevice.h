
@interface BYDevice : NSObject <BYDeviceProvider> {
    NSString * _deviceClass;
    bool  _hasActionButton;
    bool  _hasDynamicIsland;
    bool  _hasHomeButton;
    bool  _isPowerButtonOppositeVolumeButtons;
    int  _mainScreenClass;
    NSString * _productType;
    NSString * _serialNumber;
    long long  _size;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceClass;
@property (nonatomic, readonly) bool hasActionButton;
@property (nonatomic, readonly) bool hasDynamicIsland;
@property (nonatomic, readonly) bool hasHomeButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPowerButtonOppositeVolumeButtons;
@property (nonatomic, readonly) int mainScreenClass;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)currentDevice;

- (void).cxx_destruct;
- (id)currentDevice;
- (id)deviceClass;
- (bool)hasActionButton;
- (bool)hasDynamicIsland;
- (bool)hasHomeButton;
- (id)init;
- (bool)isPowerButtonOppositeVolumeButtons;
- (int)mainScreenClass;
- (id)productType;
- (id)serialNumber;
- (long long)size;
- (long long)type;

@end
