
@interface HFHumidifierDehumidifierServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (void)_formatDescription:(out id*)arg1 controlDescription:(out id*)arg2 optionalDescriptions:(out id*)arg3 forResponse:(id)arg4;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createControlItemsWithOptions:(id)arg1;

@end
