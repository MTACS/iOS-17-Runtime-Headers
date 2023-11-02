
@interface HMWidgetManagerMonitorCharacteristicsResponse : NSObject {
    NSDictionary * _reachabilityByAccessoryUniqueIdentifier;
    NSDictionary * _valueByCharacteristicUniqueIdentifier;
}

@property (readonly, copy) NSDictionary *reachabilityByAccessoryUniqueIdentifier;
@property (readonly, copy) NSDictionary *valueByCharacteristicUniqueIdentifier;

- (void).cxx_destruct;
- (id)initWithValueByCharacteristicUniqueIdentifier:(id)arg1 reachabilityByAccessoryUniqueIdentifier:(id)arg2;
- (id)reachabilityByAccessoryUniqueIdentifier;
- (id)valueByCharacteristicUniqueIdentifier;

@end
