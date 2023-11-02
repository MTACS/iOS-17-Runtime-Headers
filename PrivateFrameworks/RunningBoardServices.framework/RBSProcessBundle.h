
@interface RBSProcessBundle : NSObject <RBSXPCSecureCoding> {
    <RBSProcessBundleDataSource> * _dataSource;
    NSString * _executablePath;
    NSString * _extensionPointIdentifier;
    NSString * _identifier;
    RBSProcessInstance * _instance;
    NSString * _path;
    NSDictionary * _plistValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (nonatomic, readonly, copy) NSString *extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) RBSProcessInstance *instance;
@property (nonatomic, readonly, copy) NSString *path;
@property (readonly) Class superclass;

+ (id)bundleWithDataSource:(id)arg1;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)bundleInfoValueForKey:(id)arg1;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)executablePath;
- (id)extensionPointIdentifier;
- (id)identifier;
- (id)initWithRBSXPCCoder:(id)arg1;
- (id)instance;
- (id)path;
- (void)setInstance:(id)arg1;

@end
