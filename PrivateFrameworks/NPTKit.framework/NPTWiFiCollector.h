
@interface NPTWiFiCollector : NSObject <NPTMetadataCollection> {
    CWFInterface * _interface;
    NSMutableDictionary * cachedMetadata;
    id /* block */  metadataDidChangeHandler;
}

@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CWFInterface *interface;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (readonly) Class superclass;

+ (id)BTCModeToString:(int)arg1;
+ (id)ControlModeToString:(unsigned int)arg1;
+ (id)OpModeToString:(int)arg1;
+ (id)PhyModeToString:(int)arg1;
+ (id)SecurityTypeToString:(unsigned long long)arg1;
+ (long long)channelBandToInt:(unsigned int)arg1;
+ (id)collectorName;
+ (id)convertBSSIDToOUI:(id)arg1;
+ (id)convertPowerStateToString:(id)arg1;
+ (id)fetchWiFiData:(id)arg1;

- (void).cxx_destruct;
- (id)cachedMetadata;
- (id)interface;
- (id /* block */)metadataDidChangeHandler;
- (void)setCachedMetadata:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setMetadataDidChangeHandler:(id /* block */)arg1;
- (void)startCollectingWithCompletion:(id /* block */)arg1;
- (void)stopCollecting;

@end
