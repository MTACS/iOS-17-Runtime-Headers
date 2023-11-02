
@interface TPSWelcomeInformation : NSObject {
    NSNumber * __isHardwareWelcome;
    long long  _platform;
    NSBundle * _stringBundle;
}

@property (nonatomic, readonly, copy) NSString *collectionName;
@property (getter=isHardwareWelcome, nonatomic) bool hardwareWelcome;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, retain) NSBundle *stringBundle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)collectionName;
- (id)initWithPlatform:(long long)arg1 stringBundle:(id)arg2;
- (bool)isHardwareWelcome;
- (id)localizedStringForKey:(id)arg1;
- (id)majorVersionString;
- (id)message;
- (id)messageForPlatformIOS;
- (id)messageForPlatformMacOS;
- (id)messageForPlatformWatchOS;
- (id)osString;
- (long long)platform;
- (void)setStringBundle:(id)arg1;
- (id)stringBundle;
- (id)title;

@end
