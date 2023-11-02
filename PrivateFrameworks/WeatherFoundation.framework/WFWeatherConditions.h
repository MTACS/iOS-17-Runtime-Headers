
@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _components;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _componentsLock;
    WFLocation * _location;
    bool  _nightForecast;
}

@property (nonatomic, retain) NSMutableDictionary *components;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } componentsLock;
@property (copy) WFLocation *location;
@property (getter=isNightForecast) bool nightForecast;
@property (nonatomic, readonly) NSDate *nwc_date;
@property (nonatomic, readonly) NSDate *nwc_expirationDate;
@property (nonatomic, readonly) unsigned long long nwc_ultravioletIndexCategory;
@property (nonatomic, readonly) UIColor *nwc_ultravioletIndexCategoryColor;
@property (nonatomic, readonly) NSString *nwc_ultravioletIndexRiskDescription;
@property (nonatomic, readonly) NSString *nwm_localizedUltravioletIndexRiskDescription;
@property (nonatomic, readonly) NSString *nwm_localizedWindDirection;
@property (nonatomic, readonly) NSString *nwm_localizedWindDirectionAbbreviation;
@property (nonatomic, readonly) NSString *nwm_localizedWindDirectionAbbreviationCompact;
@property (nonatomic, readonly) NSString *nwm_localizedWindspeedWithUnit;
@property (nonatomic, readonly) NSString *nwm_localizedWindspeedWithoutUnit;
@property (nonatomic, readonly) unsigned long long nwm_ultravioletIndexCategory;
@property (nonatomic, readonly) unsigned long long simplifiedPrecipitationCondition;
@property (getter=isTypeOfPrecipitation, nonatomic, readonly) bool typeOfPrecipitation;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)calendar;
+ (unsigned long long)dateComponentCalendarUnits;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)allComponents;
- (id)components;
- (struct os_unfair_lock_s { unsigned int x1; })componentsLock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)editLinksWithLocale:(id)arg1 trackingParameter:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isNightForecast;
- (id)location;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponentsLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLocation:(id)arg1;
- (void)setNightForecast:(bool)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forComponent:(id)arg2;
- (void)setValueSync:(id)arg1 forComponent:(id)arg2;
- (id)valueForComponent:(id)arg1;
- (id)valueForComponentSync:(id)arg1;
- (bool)wf_isDay;
- (bool)wf_isDayIfSunrise:(id)arg1 sunset:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion

+ (id)_defaultWindSpeedWithUnit:(double)arg1;
+ (id)_localizedWindspeed:(double)arg1 withUnit:(int)arg2 forLocale:(id)arg3;
+ (id)_nwm_shortSuffixedKey:(id)arg1;
+ (int)_preferredWindSpeedUnitForLocale:(id)arg1;
+ (id)nwc_noDataImageForComplicationFamily:(long long)arg1;
+ (id)nwc_symbolNameForTimeOfDay:(unsigned long long)arg1 code:(unsigned long long)arg2;
+ (id)nwc_ultravioletIndexCategoryColorForNumber:(id)arg1;
+ (id)nwc_ultravioletIndexCategoryColorSpectrum;
+ (id)nwc_ultravioletIndexCategoryColorUnknown;
+ (id)nwm_localizedDescriptionForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionShortForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionShortKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedNoData;
+ (id)nwm_localizedNoDataRounded;
+ (id)nwm_localizedWindpeedUnit;

- (unsigned long long)_code;
- (unsigned long long)_indexOfWindDirectionKeyForWindDirectionInDegrees:(double)arg1 keys:(id)arg2;
- (id)_localizedWindDirectionAbbreviation:(bool)arg1;
- (unsigned long long)_nwc_code;
- (double)_speedByConverting:(double)arg1 toUnit:(int)arg2;
- (bool)isTypeOfPrecipitation;
- (unsigned long long)nw_timeOfDay;
- (id)nwc_conditionImageForTimeOfDay:(unsigned long long)arg1 withScale:(long long)arg2;
- (id)nwc_date;
- (id)nwc_expirationDate;
- (id)nwc_symbolNameForTimeOfDay:(unsigned long long)arg1;
- (unsigned long long)nwc_ultravioletIndexCategory;
- (id)nwc_ultravioletIndexCategoryColor;
- (id)nwc_ultravioletIndexRiskDescription;
- (id)nwm_localizedDescription;
- (id)nwm_localizedDescriptionForTimeOfDay:(unsigned long long)arg1;
- (id)nwm_localizedDescriptionKey;
- (id)nwm_localizedDescriptionKeyForTimeOfDay:(unsigned long long)arg1;
- (id)nwm_localizedDescriptionShort;
- (id)nwm_localizedDescriptionShortForTimeOfDay:(unsigned long long)arg1;
- (id)nwm_localizedUltravioletIndexRiskDescription;
- (id)nwm_localizedWindDirection;
- (id)nwm_localizedWindDirectionAbbreviation;
- (id)nwm_localizedWindDirectionAbbreviationCompact;
- (id)nwm_localizedWindspeedWithUnit;
- (id)nwm_localizedWindspeedWithoutUnit;
- (unsigned long long)nwm_ultravioletIndexCategory;
- (id)nwm_windDirectionKey;
- (unsigned long long)simplifiedPrecipitationCondition;

@end
