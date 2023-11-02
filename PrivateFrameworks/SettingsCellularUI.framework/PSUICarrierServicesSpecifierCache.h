
@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate> {
    CoreTelephonyClient * _client;
    NSMutableDictionary * _mmsInfoSpecifiersDict;
    NSMutableDictionary * _specifiersDict;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *mmsInfoSpecifiersDict;
@property (nonatomic, retain) NSMutableDictionary *specifiersDict;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)carrierBundleChange:(id)arg1;
- (void)clearCache;
- (id)client;
- (void)dealloc;
- (void)dialCarrierServiceNumber:(id)arg1;
- (void)fetchSpecifiers;
- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (id)mmsInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (id)mmsInfoSpecifiersDict;
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (void)openURLWithSpecifier:(id)arg1;
- (id)readPreference:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setMmsInfoSpecifiersDict:(id)arg1;
- (void)setSpecifiersDict:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)specifiers:(id)arg1;
- (id)specifiersDict;

@end
