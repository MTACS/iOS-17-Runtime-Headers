
@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {
    bool  _cellularDataAllowedFallbackValue;
    bool  _dataAllowedFallbackValue;
    NSMutableDictionary * _networkTypeToDataAllowed;
    NSMutableDictionary * _networkTypeToSizeLimit;
    bool  _wiFiDataAllowedFallbackValue;
}

+ (id)constraintsForSystemApplicationType:(long long)arg1;
+ (id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldAllowDataForCellularNetworkTypes;
- (bool)shouldAllowDataForNetworkType:(long long)arg1;
- (bool)shouldAllowDataForWiFiNetworkTypes;
- (id)sizeLimitForNetworkType:(long long)arg1;

@end
