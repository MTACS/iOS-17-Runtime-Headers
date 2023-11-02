
@interface PrimaryInterfaceUtils : NSObject {
    NSDate * _estimatedInterfaceBecamePrimaryDate;
    bool  _hasPrimaryInterface;
    NSDate * _interfaceBecamePrimaryDate;
    long long  _primaryInterfaceType;
}

@property (nonatomic, readonly) NSDate *estimatedInterfaceBecamePrimaryDate;
@property (nonatomic, readonly) bool hasPrimaryInterface;
@property (nonatomic, readonly) NSDate *interfaceBecamePrimaryDate;
@property (nonatomic, readonly) long long primaryInterfaceType;
@property (nonatomic, readonly) NSString *primaryInterfaceTypeString;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setEstimatedInterfaceBecamePrimaryDate:(id)arg1;
- (void)_setHasPrimaryInterface:(bool)arg1;
- (void)_setInterfaceBecamePrimaryDate:(id)arg1;
- (void)_setPrimaryInterfaceType:(long long)arg1;
- (id)estimatedInterfaceBecamePrimaryDate;
- (void)getDefaultPathInfoUsingSecondsSinceChange;
- (bool)hasPrimaryInterface;
- (id)init;
- (id)interfaceBecamePrimaryDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)primaryInterfaceType;
- (id)primaryInterfaceTypeString;

@end
