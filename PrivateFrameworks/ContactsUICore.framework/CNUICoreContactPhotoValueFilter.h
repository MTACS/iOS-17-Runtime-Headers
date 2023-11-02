
@interface CNUICoreContactPhotoValueFilter : NSObject <CNUICoreContactPropertyValueFilter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)contactByFilteringOutPropertyValueOfContact:(id)arg1;
- (id)description;
- (void)filterPropertyValuesFromContact:(id)arg1;

@end
