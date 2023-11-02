
@interface PKContent : NSObject <NSSecureCoding> {
    NSURL * _appLaunchURL;
    PKBarcode * _barcode;
    NSString * _localizedDescription;
    NSArray * _storeIdentifiers;
    NSArray * _systemAppBundleIdentifiers;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (nonatomic, retain) PKBarcode *barcode;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSArray *storeIdentifiers;
@property (nonatomic, copy) NSArray *systemAppBundleIdentifiers;

+ (id)createWithFileURL:(id)arg1 dataTypeIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appLaunchURL;
- (id)barcode;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 passType:(unsigned long long)arg4;
- (id)localizedDescription;
- (void)setAppLaunchURL:(id)arg1;
- (void)setBarcode:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setStoreIdentifiers:(id)arg1;
- (void)setSystemAppBundleIdentifiers:(id)arg1;
- (id)storeIdentifiers;
- (id)systemAppBundleIdentifiers;

@end
