
@interface HFAbstractBinaryStatusItem : HFAbstractControlStatusItem

- (id)_shortTitleForTitle:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)arg1;
- (id)multipleAbnormalServicesDescriptionString;
- (id)multipleAbnormalServicesFormatString;
- (id)multipleNormalServicesDescriptionString;
- (id)multipleNormalServicesFormatString;
- (id)multipleUnknownServicesFormatString;
- (id)oneAbnormalServiceDescriptionString;
- (id)oneAbnormalServiceFormatString;
- (id)oneNormalServiceDescriptionString;
- (id)oneNormalServiceFormatString;
- (id)oneUnknownServiceFormatString;

@end
