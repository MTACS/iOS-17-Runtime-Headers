
@interface ADAppAdvertisement : ADAppRepresentation <APOdmlRankable> {
    ADDataObject * _adData;
    NSString * _instanceID;
    APOdmlServerResponse * _odmlResponse;
    NSString * _selectedCppID;
}

@property (nonatomic, retain) ADDataObject *adData;
@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, retain) NSString *instanceID;
@property (nonatomic, readonly) APOdmlServerResponse *odmlResponse;
@property (nonatomic, retain) NSString *selectedCppID;

- (void).cxx_destruct;
- (id)AD_jsonDictionary;
- (id)adData;
- (id)initWithAdamID:(id)arg1 assetInfo:(id)arg2 adData:(id)arg3;
- (id)initWithAdamID:(id)arg1 assetInfo:(id)arg2 adData:(id)arg3 instanceID:(id)arg4;
- (id)initWithAdamID:(id)arg1 cppIDs:(id)arg2 serverCppID:(id)arg3 adData:(id)arg4 instanceID:(id)arg5;
- (id)instanceID;
- (id)odmlResponse;
- (id)selectedCppID;
- (void)setAdData:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setSelectedCppID:(id)arg1;

@end
