
@interface PXSharedLibraryRule : NSObject <NSCopying> {
    NSArray * _assetLocalIdentifiers;
    long long  _autoSharePolicy;
    NSArray * _personUUIDs;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSArray *assetLocalIdentifiers;
@property (nonatomic, readonly) long long autoSharePolicy;
@property (nonatomic, readonly, copy) NSArray *personUUIDs;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (id)customizedRuleWithStartDate:(id)arg1 personUUIDs:(id)arg2;
+ (id)everythingRule;
+ (id)manualRule;
+ (id)manualRuleWithAssetLocalIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithAutoSharePolicy:(long long)arg1 startDate:(id)arg2 personUUIDs:(id)arg3 assetLocalIdentifiers:(id)arg4;
- (id)assetLocalIdentifiers;
- (long long)autoSharePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)personUUIDs;
- (id)startDate;

@end
