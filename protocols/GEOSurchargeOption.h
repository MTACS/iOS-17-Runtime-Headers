
@protocol GEOSurchargeOption

@required

- (<GEOSurchargeType> *)selectedSurchargeType;
- (unsigned long long)selectedSurchargeTypeIndex;
- (NSArray *)surchargeTypes;

@end
