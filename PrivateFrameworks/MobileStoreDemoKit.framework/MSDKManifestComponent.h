
@interface MSDKManifestComponent : NSObject {
    NSString * _certificate;
    NSArray * _data;
    NSString * _identifier;
    NSMutableArray * _mutableDependencies;
    NSString * _osVersion;
    NSString * _platformType;
    NSDictionary * _rawDependencyDict;
    NSData * _signature;
    long long  _type;
}

@property (nonatomic, readonly) NSString *certificate;
@property (nonatomic, readonly) NSArray *data;
@property (nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *mutableDependencies;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *platformType;
@property (nonatomic, retain) NSDictionary *rawDependencyDict;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)_parseDataItem:(id)arg1;
- (id)_parseDataItemsForAppComponent:(id)arg1;
- (id)_parseFileItems:(id)arg1;
- (void)addDependency:(id)arg1;
- (id)certificate;
- (id)data;
- (id)dependencies;
- (id)getRawDependency;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 componentType:(long long)arg2 andDictionary:(id)arg3;
- (bool)isOfType:(long long)arg1;
- (id)mutableDependencies;
- (id)osVersion;
- (id)platformType;
- (id)rawDependencyDict;
- (void)setMutableDependencies:(id)arg1;
- (void)setRawDependencyDict:(id)arg1;
- (void)setType:(long long)arg1;
- (id)signature;
- (long long)type;

@end
