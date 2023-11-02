
@interface HKDataProviderNoDataCurrentValue : NSObject <HKDataProviderValue>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)date;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;

@end
