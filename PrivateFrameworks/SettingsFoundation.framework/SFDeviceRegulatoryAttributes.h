
@interface SFDeviceRegulatoryAttributes : NSObject {
    NSString * __resolvedCountryOfOrigin;
    NSString * __resolvedIndiaBISNumber;
    NSDate * __resolvedManufacturingDate;
    UIImage * __resolvedRegulatoryImage;
    NSDate * __resolvedStartingWeek;
    NSDate * _manufacturingDate;
    unsigned long long  _monthOfManufacture;
    NSString * _serialNumber;
    unsigned long long  _weekOfManufacture;
    unsigned long long  _yearForWeekOfManufacture;
    unsigned long long  _yearOfManufacture;
}

@property (nonatomic, retain) NSString *_resolvedCountryOfOrigin;
@property (nonatomic, retain) NSString *_resolvedIndiaBISNumber;
@property (nonatomic, retain) NSDate *_resolvedManufacturingDate;
@property (nonatomic, retain) UIImage *_resolvedRegulatoryImage;
@property (nonatomic, retain) NSDate *_resolvedStartingWeek;
@property (nonatomic, readonly, copy) NSString *countryOfOriginString;
@property (nonatomic, readonly, copy) NSString *indiaBISRegulatoryNumber;
@property (nonatomic, readonly) NSDate *manufacturingDate;
@property (nonatomic, readonly) unsigned long long monthOfManufacture;
@property (nonatomic, readonly, copy) NSString *plantCode;
@property (nonatomic, readonly, copy) UIImage *regulatoryImage;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly) unsigned long long weekOfManufacture;
@property (nonatomic, readonly) unsigned long long yearForWeekOfManufacture;
@property (nonatomic, readonly) unsigned long long yearOfManufacture;

+ (id)_calendar;
+ (id)_dateFormatter;
+ (id)_weekCodeLookup;
+ (id)_yearCodeToStartDateLookup;
+ (id)currentDeviceAttributes;
+ (id)getRegulatoryAttributes;

- (void).cxx_destruct;
- (void)_resolveCountryOfOrigin:(id)arg1;
- (void)_resolveDeviceAttributes:(id)arg1;
- (void)_resolveIndiaBISRegulatoryNumber:(id)arg1;
- (void)_resolveManufacturingDateRelatedFields:(id)arg1;
- (void)_resolveRegulatoryImage:(id)arg1;
- (id)_resolvedCountryOfOrigin;
- (id)_resolvedIndiaBISNumber;
- (id)_resolvedManufacturingDate;
- (id)_resolvedRegulatoryImage;
- (id)_resolvedStartingWeek;
- (id)countryOfOriginString;
- (id)indiaBISRegulatoryNumber;
- (id)initWithRegulatoryAttributes:(id)arg1 serialNumber:(id)arg2;
- (id)manufacturingDate;
- (unsigned long long)monthOfManufacture;
- (id)plantCode;
- (id)regulatoryImage;
- (id)serialNumber;
- (void)set_resolvedCountryOfOrigin:(id)arg1;
- (void)set_resolvedIndiaBISNumber:(id)arg1;
- (void)set_resolvedManufacturingDate:(id)arg1;
- (void)set_resolvedRegulatoryImage:(id)arg1;
- (void)set_resolvedStartingWeek:(id)arg1;
- (unsigned long long)weekOfManufacture;
- (unsigned long long)yearForWeekOfManufacture;
- (unsigned long long)yearOfManufacture;

@end
