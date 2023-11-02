
@protocol CNRegulatoryLogger <NSObject>

@required

- (void)deletingContactsData;
- (void)displayingOOPContactPicker;
- (void)logContactPickerAccessEvent;
- (void)logContactsDataAccessEvent;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(NSSet *)arg1;
- (void)modifyingContactsData;
- (void)readAndTransmittingContactsData;
- (void)readingContactsData;
- (void)receivingContactsDataFromOOPContactPicker;

@end
