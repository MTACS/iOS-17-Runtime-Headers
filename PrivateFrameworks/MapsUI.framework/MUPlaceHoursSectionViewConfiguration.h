
@interface MUPlaceHoursSectionViewConfiguration : NSObject {
    unsigned long long  _numberOfInlineServiceHours;
    MUBusinessHoursConfiguration * _placeHours;
    NSArray * _serviceHoursList;
}

@property (nonatomic) unsigned long long numberOfInlineServiceHours;
@property (nonatomic, retain) MUBusinessHoursConfiguration *placeHours;
@property (nonatomic, retain) NSArray *serviceHoursList;

+ (id)configurationForBusinessHours:(id)arg1;
+ (id)configurationForMapItem:(id)arg1;
+ (id)configurationForMessagesMapItem:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)numberOfInlineServiceHours;
- (id)placeHours;
- (id)serviceHoursList;
- (void)setNumberOfInlineServiceHours:(unsigned long long)arg1;
- (void)setPlaceHours:(id)arg1;
- (void)setServiceHoursList:(id)arg1;

@end
