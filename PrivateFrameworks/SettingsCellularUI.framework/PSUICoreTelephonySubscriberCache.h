
@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate> {
    CoreTelephonyClient * _client;
    NSMutableDictionary * _isoCountryCodesDict;
    NSMutableDictionary * _mobileEquipmentInfoDict;
    NSMutableDictionary * _shortLabelDict;
    PSSimStatusCache * _simStatusCache;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *isoCountryCodesDict;
@property (retain) NSMutableDictionary *mobileEquipmentInfoDict;
@property (retain) NSMutableDictionary *shortLabelDict;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)client;
- (void)fetchCountryCodes;
- (void)fetchMobileEquipmentInfo;
- (void)fetchShortLabels;
- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (id)initWithCoreTelephonyClient:(id)arg1 simStatusCache:(id)arg2;
- (id)isoCountryCode:(id)arg1;
- (id)isoCountryCodesDict;
- (id)mobileEquipmentInfo:(id)arg1;
- (id)mobileEquipmentInfoDict;
- (unsigned long long)mobileEquipmentInfoLength;
- (void)prlVersionDidChange:(id)arg1 version:(id)arg2;
- (void)setClient:(id)arg1;
- (void)setIsoCountryCodesDict:(id)arg1;
- (void)setMobileEquipmentInfoDict:(id)arg1;
- (void)setShortLabelDict:(id)arg1;
- (id)shortLabel:(id)arg1;
- (id)shortLabelDict;
- (void)shortLabelsDidChange;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)willEnterForeground;

@end
