
@interface _MUETAConfiguration : NSObject {
    NSString * _etaString;
    NSString * _symbolName;
}

@property (nonatomic, copy) NSString *etaString;
@property (nonatomic, copy) NSString *symbolName;

+ (id)addStopConfigurationETAStringForTravelTime:(double)arg1;
+ (id)configurationForEtaStringFor:(unsigned long long)arg1 travelTime:(double)arg2 hasSecondaryController:(bool)arg3 isStackingButtons:(bool)arg4;
+ (id)rerouteConfigurationETAStringForTravelTime:(double)arg1;

- (void).cxx_destruct;
- (id)etaString;
- (void)setEtaString:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
