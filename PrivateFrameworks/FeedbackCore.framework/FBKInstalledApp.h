
@interface FBKInstalledApp : NSObject {
    LSApplicationProxy * _applicationProxy;
    NSString * _identifier;
    NSString * _name;
    NSString * _version;
}

@property (readonly) NSNumber *adamID;
@property (nonatomic, retain) LSApplicationProxy *applicationProxy;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *version;

+ (id)_searchIdentifierInAppURL:(id)arg1;
+ (id)_searchVersionInAppURL:(id)arg1 identifier:(id)arg2;
+ (id)appWithAppProxy:(id)arg1;

- (void).cxx_destruct;
- (id)adamID;
- (id)applicationProxy;
- (id)description;
- (id)identifier;
- (bool)isAppleApp;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isIWorkApp;
- (id)name;
- (void)setApplicationProxy:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
