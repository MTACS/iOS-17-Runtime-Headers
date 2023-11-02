
@interface AMSUIDCellularDataInquiry : NSObject {
    NSBundle * _bundle;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) bool isEnabledForBundle;
@property (nonatomic, readonly) bool isEnabledForDevice;
@property (nonatomic, readonly) bool isSupported;

+ (id)settingsURL;

- (void).cxx_destruct;
- (id)bundle;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (bool)isEnabledForBundle;
- (bool)isEnabledForDevice;
- (bool)isSupported;

@end
