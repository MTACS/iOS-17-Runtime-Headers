
@interface HFStateDumpBuilderContext : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long  _detailLevel;
    bool  _excludePrimaryID;
    bool  _includeVolatileObjects;
    NSString * _multilinePrefix;
    NSSet * _objectsToExclude;
    unsigned long long  _outputStyle;
    NSDictionary * _userInfo;
}

@property (nonatomic) unsigned long long detailLevel;
@property (nonatomic) bool excludePrimaryID;
@property (nonatomic) bool includeVolatileObjects;
@property (nonatomic, copy) NSString *multilinePrefix;
@property (nonatomic, copy) NSSet *objectsToExclude;
@property (nonatomic) unsigned long long outputStyle;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)contextWithDetailLevel:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithDetailLevel:(unsigned long long)arg1;
- (id)copyWithOutputStyle:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)derivedOutputStyle;
- (unsigned long long)detailLevel;
- (bool)excludePrimaryID;
- (bool)includeVolatileObjects;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithDetailLevel:(unsigned long long)arg1;
- (id)multilinePrefix;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectsToExclude;
- (unsigned long long)outputStyle;
- (void)setDetailLevel:(unsigned long long)arg1;
- (void)setExcludePrimaryID:(bool)arg1;
- (void)setIncludeVolatileObjects:(bool)arg1;
- (void)setMultilinePrefix:(id)arg1;
- (void)setObjectsToExclude:(id)arg1;
- (void)setOutputStyle:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
