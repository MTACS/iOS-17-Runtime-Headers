
@interface _PXStoryTimeBasedChapter : NSObject <NSCopying, PXStoryChapter, PXStoryMutableChapter> {
    NSDateInterval * _dateInterval;
    NSString * _firstAssetLocalIdentifier;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
}

@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSDateInterval *extendedDateIntervalForComparisonWithAssetDates;
@property (nonatomic, copy) NSString *firstAssetLocalIdentifier;
@property (nonatomic, readonly) NSObject<NSCopying> *identifier;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;

- (void).cxx_destruct;
- (long long)compareStartDateTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)diagnosticDescription;
- (id)extendedDateIntervalForComparisonWithAssetDates;
- (id)firstAssetLocalIdentifier;
- (id)identifier;
- (id)initWithDateInterval:(id)arg1 firstAssetLocalIdentifier:(id)arg2;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)setDateInterval:(id)arg1;
- (void)setFirstAssetLocalIdentifier:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
