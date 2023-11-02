
@interface GEOEVChargerPlug : NSObject {
    GEOPDPlug * _pdPlug;
}

@property (nonatomic, readonly) unsigned long long availableNumberOfChargers;
@property (nonatomic, readonly) int connectorType;
@property (nonatomic, readonly) NSString *connectorTypeDisplayText;
@property (nonatomic, readonly) NSString *currentTypeDisplayText;
@property (nonatomic, readonly) unsigned long long powerWatts;
@property (nonatomic, readonly) int realtimeStatus;
@property (nonatomic, readonly) unsigned long long totalNumberOfChargers;

+ (id)plugsFromPDPlugs:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)availableNumberOfChargers;
- (int)connectorType;
- (id)connectorTypeDisplayText;
- (id)currentTypeDisplayText;
- (id)initWithPDPlug:(id)arg1;
- (unsigned long long)powerWatts;
- (int)realtimeStatus;
- (unsigned long long)totalNumberOfChargers;

@end
