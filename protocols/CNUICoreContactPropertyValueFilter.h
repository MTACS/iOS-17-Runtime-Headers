
@protocol CNUICoreContactPropertyValueFilter <NSObject>

@required

- (CNContact *)contactByFilteringOutPropertyValueOfContact:(CNContact *)arg1;
- (void)filterPropertyValuesFromContact:(CNMutableContact *)arg1;

@end
