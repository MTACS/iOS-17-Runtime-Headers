
@interface MTAHTSupport : NSObject {
    Class  _AHTDevice;
    Class  _AHTInterface;
    NSBundle * _bundle;
}

@property (nonatomic, retain) Class AHTDevice;
@property (nonatomic, retain) Class AHTInterface;
@property (retain) NSBundle *bundle;

+ (id)allDevices;
+ (id)allInterfaces;
+ (id)getDeviceInServiceTree:(unsigned int)arg1;
+ (id)getInterfaceInServiceTree:(unsigned int)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (Class)AHTDevice;
- (Class)AHTInterface;
- (id)bundle;
- (id)init;
- (void)setAHTDevice:(Class)arg1;
- (void)setAHTInterface:(Class)arg1;
- (void)setBundle:(id)arg1;

@end
