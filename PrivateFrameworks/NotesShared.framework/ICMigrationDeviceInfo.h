
@interface ICMigrationDeviceInfo : NSObject <NSCopying> {
    bool  _isIOSDevice;
    bool  _isOSXDevice;
    NSString * _name;
    bool  _upgradable;
    bool  _upgradableToIOS13;
    bool  _upgradableToIOS14orMacOS11;
    bool  _upgraded;
    bool  _upgradedToIOS13;
    bool  _upgradedToIOS14EorMacOS11E;
}

@property (nonatomic, readonly) bool isIOSDevice;
@property (nonatomic, readonly) bool isOSXDevice;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool upgradable;
@property (nonatomic, readonly) bool upgradableToIOS13;
@property (nonatomic, readonly) bool upgradableToIOS14orMacOS11;
@property (nonatomic, readonly) bool upgraded;
@property (nonatomic, readonly) bool upgradedToIOS13;
@property (nonatomic, readonly) bool upgradedToIOS14EorMacOS11E;

+ (void)logDeviceList:(id)arg1;

- (void).cxx_destruct;
- (id)attributedStringWithAttributes:(id)arg1 asteriskColor:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 upgradable:(bool)arg2 upgraded:(bool)arg3;
- (bool)isIOSDevice;
- (bool)isOSXDevice;
- (id)loggableDescription;
- (id)name;
- (bool)shouldBeHidden;
- (bool)upgradable;
- (bool)upgradableToIOS13;
- (bool)upgradableToIOS14orMacOS11;
- (bool)upgraded;
- (bool)upgradedToIOS13;
- (bool)upgradedToIOS14EorMacOS11E;

@end
