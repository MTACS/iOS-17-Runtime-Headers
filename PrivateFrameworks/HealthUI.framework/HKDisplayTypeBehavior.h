
@interface HKDisplayTypeBehavior : NSObject <NSCopying> {
    bool  _allowsSourceReordering;
    bool  _appearsInDataTypeSearch;
    bool  _canBecomeFavorite;
    bool  _chartsRelativeData;
    bool  _hidden;
    long long  _preferredCalendarDayAlignment;
    unsigned long long  _statisticsMergeStrategy;
    bool  _supportsAssociatedSamples;
    bool  _unitPreferencesRequireChangeConfirmation;
}

@property (nonatomic, readonly) bool allowsSourceReordering;
@property (nonatomic, readonly) bool appearsInDataTypeSearch;
@property (nonatomic, readonly) bool canBecomeFavorite;
@property (nonatomic, readonly) bool chartsRelativeData;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) long long preferredCalendarDayAlignment;
@property (nonatomic, readonly) unsigned long long statisticsMergeStrategy;
@property (nonatomic, readonly) bool supportsAssociatedSamples;
@property (nonatomic, readonly) bool unitPreferencesRequireChangeConfirmation;

- (bool)allowsSourceReordering;
- (bool)appearsInDataTypeSearch;
- (bool)canBecomeFavorite;
- (bool)chartsRelativeData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)hidden;
- (id)init;
- (id)initWithStatisticsMergeStrategy:(unsigned long long)arg1 preferredCalendaryDayAlignment:(long long)arg2 allowsSourceReordering:(bool)arg3 unitPreferenceChangeConfirmation:(bool)arg4 chartsRelativeData:(bool)arg5 appearsInDataTypeSearch:(bool)arg6 supportsAssociatedSamples:(bool)arg7 canBecomeFavorite:(bool)arg8 hidden:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (long long)preferredCalendarDayAlignment;
- (unsigned long long)statisticsMergeStrategy;
- (bool)supportsAssociatedSamples;
- (bool)unitPreferencesRequireChangeConfirmation;

@end
