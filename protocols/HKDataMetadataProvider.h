
@protocol HKDataMetadataProvider

@required

- (void)addDetailValuesToSection:(id <HKDataMetadataDetailSectionDataReceiver>)arg1;

@optional

- (NSString *)detailFooter;

@end
