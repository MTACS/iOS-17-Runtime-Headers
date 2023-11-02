
@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel {
    NSString * _alarmLabel;
    CLKDevice * _device;
    unsigned long long  _entryType;
    NSDate * _fireDate;
    NSDate * _snoozeDate;
}

@property (nonatomic, retain) NSString *alarmLabel;
@property (nonatomic) unsigned long long entryType;
@property (nonatomic, retain) NSDate *fireDate;
@property (nonatomic, retain) NSDate *snoozeDate;

+ (id)companionModelWithDevice:(id)arg1;

- (void).cxx_destruct;
- (id)_activeStateTimeRelativeDateTextProvider;
- (id)_activeStateTimeTextProvider;
- (id)_circularTemplateForAlarm:(bool)arg1;
- (id)_extraLargeAlarmInactiveImageProvider;
- (id)_getAlarmImageProviderWithActiveStatus:(bool)arg1;
- (id)_largeUtilityInactiveImageProvider;
- (void)_makeAlarmStackTextTimeProvider:(id*)arg1 designatorProvider:(id*)arg2 designatorExists:(bool*)arg3 designatorLeads:(bool*)arg4;
- (id)_modularSmallAlarmInactiveImageProvider;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newLargeModularTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newSmallModularTemplate;
- (bool)_pairedDeviceSupportsComplicationSymbols;
- (id)_richCircularMetadata;
- (id)_snoozeStateDateTextProvider;
- (id)alarmLabel;
- (id)description;
- (unsigned long long)entryType;
- (id)fireDate;
- (id)initWithDevice:(id)arg1;
- (void)setAlarmLabel:(id)arg1;
- (void)setEntryType:(unsigned long long)arg1;
- (void)setFireDate:(id)arg1;
- (void)setSnoozeDate:(id)arg1;
- (id)snoozeDate;
- (id)templateForComplicationFamily:(long long)arg1;

@end
