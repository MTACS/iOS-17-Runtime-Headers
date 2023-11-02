
@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _activeContexts;
    bool  _attached;
    bool  _cellularDataPossible;
    unsigned int  _dataBearerSoMask;
    int  _dataBearerTechnology;
    int  _dataMode;
    bool  _dataPlanSignalingReductionOverride;
    bool  _dataSim;
    bool  _inHomeCountry;
    int  _indicator;
    int  _indicatorOverride;
    int  _radioTechnology;
    int  _reason;
    bool  _roamAllowed;
    unsigned int  _totalActiveContexts;
}

@property (nonatomic) unsigned int activeContexts;
@property (nonatomic) bool attached;
@property (nonatomic) bool cellularDataPossible;
@property (nonatomic) unsigned int dataBearerSoMask;
@property (nonatomic) int dataBearerTechnology;
@property (nonatomic, readonly) NSString *dataBearerTechnologyString;
@property (nonatomic) int dataMode;
@property (nonatomic) bool dataPlanSignalingReductionOverride;
@property (nonatomic) bool dataSim;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) bool inHomeCountry;
@property (nonatomic) int indicator;
@property (nonatomic) int indicatorOverride;
@property (nonatomic, readonly) NSString *indicatorOverrideString;
@property (nonatomic, readonly) NSString *indicatorString;
@property (nonatomic, readonly) bool newRadioCoverage;
@property (nonatomic, readonly) bool newRadioDataBearer;
@property (nonatomic, readonly) bool newRadioMmWaveDataBearer;
@property (nonatomic, readonly) bool newRadioNsaCoverage;
@property (nonatomic, readonly) bool newRadioNsaDataBearer;
@property (nonatomic, readonly) bool newRadioSaCoverage;
@property (nonatomic, readonly) bool newRadioSaDataBearer;
@property (nonatomic, readonly) bool newRadioSub6DataBearer;
@property (nonatomic, readonly) NSString *radioCoverageString;
@property (nonatomic, readonly) NSString *radioFrequencyString;
@property (nonatomic) int radioTechnology;
@property (nonatomic, readonly) NSString *radioTechnologyString;
@property (nonatomic) int reason;
@property (nonatomic) bool roamAllowed;
@property (nonatomic) unsigned int totalActiveContexts;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (bool)supportsSecureCoding;

- (unsigned int)activeContexts;
- (bool)attached;
- (bool)cellularDataPossible;
- (id)copyBasic;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataBearerSoMask;
- (int)dataBearerTechnology;
- (int)dataMode;
- (bool)dataPlanSignalingReductionOverride;
- (bool)dataSim;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)inHomeCountry;
- (int)indicator;
- (int)indicatorOverride;
- (id)initWithCoder:(id)arg1;
- (bool)newRadioCoverage;
- (bool)newRadioDataBearer;
- (bool)newRadioMmWaveDataBearer;
- (bool)newRadioNsaCoverage;
- (bool)newRadioNsaDataBearer;
- (bool)newRadioSaCoverage;
- (bool)newRadioSaDataBearer;
- (bool)newRadioSub6DataBearer;
- (int)radioTechnology;
- (int)reason;
- (bool)roamAllowed;
- (void)setActiveContexts:(unsigned int)arg1;
- (void)setAttached:(bool)arg1;
- (void)setCellularDataPossible:(bool)arg1;
- (void)setDataBearerSoMask:(unsigned int)arg1;
- (void)setDataBearerTechnology:(int)arg1;
- (void)setDataMode:(int)arg1;
- (void)setDataPlanSignalingReductionOverride:(bool)arg1;
- (void)setDataSim:(bool)arg1;
- (void)setInHomeCountry:(bool)arg1;
- (void)setIndicator:(int)arg1;
- (void)setIndicatorOverride:(int)arg1;
- (void)setRadioTechnology:(int)arg1;
- (void)setReason:(int)arg1;
- (void)setRoamAllowed:(bool)arg1;
- (void)setTotalActiveContexts:(unsigned int)arg1;
- (unsigned int)totalActiveContexts;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)dataBearerTechnologyString;
- (id)dictionary;
- (id)indicatorOverrideString;
- (id)indicatorString;
- (id)radioCoverageString;
- (id)radioFrequencyString;
- (id)radioTechnologyString;

@end
