
@interface RCDebugOverrides : NSObject <RCSerializable> {
    NSArray * _additionalSegmentSetIDs;
    unsigned long long  _configurationSource;
    unsigned long long  _debugEnvironment;
    bool  _disableAbTesting;
    bool  _enableExtraLogs;
    bool  _ignoreCache;
    NSArray * _overrideSegmentSetIDs;
}

@property (nonatomic, readonly, copy) NSArray *additionalSegmentSetIDs;
@property (nonatomic, readonly) unsigned long long configurationSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long debugEnvironment;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableAbTesting;
@property (nonatomic, readonly) bool enableExtraLogs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreCache;
@property (nonatomic, readonly) bool onlyUseFallbackURL;
@property (nonatomic, readonly, copy) NSArray *overrideSegmentSetIDs;
@property (readonly) Class superclass;

+ (id)defaultDebugOverrides;

- (void).cxx_destruct;
- (id)additionalSegmentSetIDs;
- (unsigned long long)configurationSource;
- (unsigned long long)debugEnvironment;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)disableAbTesting;
- (bool)enableExtraLogs;
- (unsigned long long)hash;
- (bool)ignoreCache;
- (id)initWithDisableAbTesting:(bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(bool)arg6;
- (id)initWithDisableAbTesting:(bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(bool)arg6 enableExtraLogs:(bool)arg7;
- (id)initWithDisableAbTesting:(bool)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 onlyUseFallbackURL:(bool)arg4 debugEnvironment:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)onlyUseFallbackURL;
- (id)overrideSegmentSetIDs;

@end
