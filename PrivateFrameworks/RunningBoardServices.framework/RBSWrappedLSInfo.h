
@interface RBSWrappedLSInfo : NSObject {
    NSString * _bundleID;
    NSString * _personaString;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *personaString;

+ (id)infoWithBundleID:(id)arg1 personaString:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithBundleID:(id)arg1 personaString:(id)arg2;
- (id)bundleID;
- (id)personaString;

@end
