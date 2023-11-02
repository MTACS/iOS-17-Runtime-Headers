
@protocol MTLRasterizationRateMapSPI <MTLRasterizationRateMap>

@required

- (NSString *)formattedDescription:(unsigned long long)arg1;
- (float)minFactor;
- (unsigned long long)mutability;
- (void)resetUsingDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;

@end
