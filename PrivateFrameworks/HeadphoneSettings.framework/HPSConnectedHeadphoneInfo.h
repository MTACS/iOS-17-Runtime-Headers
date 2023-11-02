
@interface HPSConnectedHeadphoneInfo : NSObject {
    NSString * _deviceID;
    UIImage * _deviceImage;
    NSString * _deviceName;
    PSSpecifier * _deviceSpecifier;
}

@property (readonly, retain) NSString *deviceID;
@property (readonly, retain) UIImage *deviceImage;
@property (readonly, retain) NSString *deviceName;
@property (readonly, retain) PSSpecifier *deviceSpecifier;

- (void).cxx_destruct;
- (id)deviceID;
- (id)deviceImage;
- (id)deviceName;
- (id)deviceSpecifier;
- (id)initWithID:(id)arg1 name:(id)arg2 image:(id)arg3 specifier:(id)arg4;

@end
