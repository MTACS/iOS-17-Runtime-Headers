
@interface ISDeviceInfo : NSObject {
    unsigned long long  _deviceClass;
    unsigned long long  _deviceSubtype;
    long long  _rawDeviceIdiom;
    unsigned long long  _screenClass;
    double  _screenScale;
}

@property (readonly) int deviceClass;
@property (readonly) unsigned long long deviceSubtype;
@property (readonly) struct CGSize { double x1; double x2; } homeScreenIconSize;
@property (readonly) unsigned long long ideom;
@property (readonly) struct CGSize { double x1; double x2; } largeHomeScreenIconSize;
@property (readonly) struct CGSize { double x1; double x2; } messagesLauncherIconSize;
@property (readonly) long long rawDeviceIdiom;
@property (readonly) int screenClass;
@property (readonly) double screenScale;

+ (id)sharedInstance;

- (int)deviceClass;
- (unsigned long long)deviceSubtype;
- (struct CGSize { double x1; double x2; })homeScreenIconSize;
- (unsigned long long)ideom;
- (id)init;
- (struct CGSize { double x1; double x2; })largeHomeScreenIconSize;
- (struct CGSize { double x1; double x2; })messagesLauncherIconSize;
- (long long)rawDeviceIdiom;
- (int)screenClass;
- (double)screenScale;

@end
