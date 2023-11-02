
@interface SHAttribution : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleIdentifier;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *containingAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *productName;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

+ (id)mediaLibraryAttributionExceptionPlist;
+ (id)musicRecognitionSensorActivityAttributionExceptionPlist;
+ (id)productNameForBundleIdentifier:(id)arg1;
+ (bool)requiresMediaLibraryAttributionForBundleIdentifier:(id)arg1;
+ (bool)requiresMusicRecognitionSensorActivityAttributionForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (void)configureAttributionForConnection:(id)arg1;
- (void)configureAttributionForTask:(struct __SecTask { }*)arg1;
- (id)containingAppBundleIdentifier;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)productName;
- (id)teamIdentifier;

@end
