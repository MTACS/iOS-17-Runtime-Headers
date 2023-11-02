
@interface HMAccessorySettingFetchResult : NSObject <HMFObject> {
    long long  _failureType;
    NSString * _keyPath;
    HMImmutableSetting * _setting;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) long long failureType;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMImmutableSetting *setting;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)fetchResultsWithKeyPaths:(id)arg1 failureType:(long long)arg2;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (id)error;
- (long long)failureType;
- (id)initWithKeyPath:(id)arg1 failureType:(long long)arg2;
- (id)initWithKeyPath:(id)arg1 setting:(id)arg2 failureType:(long long)arg3;
- (id)initWithSetting:(id)arg1;
- (id)keyPath;
- (id)privateDescription;
- (id)setting;
- (id)shortDescription;

@end
