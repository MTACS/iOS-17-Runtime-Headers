
@interface HDLocalFeatureAttributesProvider : NSObject <HDPairedFeatureAttributesProviding> {
    HKFeatureAttributes * _localFeatureAttributes;
}

@property (nonatomic, readonly, copy) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentPairedFeatureAttributes;
- (id)initWithLocalFeatureAttributes:(id)arg1;

@end
