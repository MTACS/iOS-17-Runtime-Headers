
@interface PLQueryBuilder : NSObject {
    PLQuery * _query;
}

+ (id)_combineFirstQuery:(id)arg1 secondQuery:(id)arg2 conjunction:(int)arg3;
+ (id)andCombineFirstQuery:(id)arg1 secondQuery:(id)arg2;
+ (id)notQuery:(id)arg1;
+ (id)orCombineFirstQuery:(id)arg1 secondQuery:(id)arg2;
+ (id)validComparatorsForQueryKey:(int)arg1;
+ (id)validUnitValuesForQueryKey:(int)arg1;

- (void).cxx_destruct;
- (void)_addCircularRegionQueryKey:(int)arg1 circularRegionValue:(id)arg2 comparator:(int)arg3;
- (void)_addDateUnitQueryForKey:(int)arg1 withValue:(id)arg2 withType:(int)arg3 withUnit:(int)arg4 exclude:(bool)arg5;
- (void)_addQueryForKey:(int)arg1 withValue:(id)arg2 withType:(int)arg3 withComparator:(int)arg4;
- (void)_addQueryWithKey:(int)arg1 firstValue:(id)arg2 secondValue:(id)arg3 valueType:(int)arg4 unit:(int)arg5 comparator:(int)arg6;
- (void)_addRangeQueryForKey:(int)arg1 withFirstValue:(id)arg2 withSecondValue:(id)arg3 withType:(int)arg4;
- (void)_addStringQueryKey:(int)arg1 stringValue:(id)arg2 comparator:(int)arg3;
- (bool)_isValidCircularRegionComparator:(int)arg1;
- (bool)_isValidDateKey:(int)arg1;
- (bool)_isValidNumericComparator:(int)arg1;
- (bool)_isValidStringComparator:(int)arg1;
- (bool)_validIsEmptyQueryKey:(int)arg1;
- (void)addApertureQuery:(double)arg1 comparator:(int)arg2;
- (void)addApertureRangeQueryBetweenValue:(double)arg1 andValue:(double)arg2;
- (void)addAssetTypeQuery:(int)arg1 exclude:(bool)arg2;
- (void)addBitrateQuery:(double)arg1 comparator:(int)arg2;
- (void)addCameraMakeQuery:(id)arg1 comparator:(int)arg2;
- (void)addCameraModelQuery:(id)arg1 comparator:(int)arg2;
- (void)addCircularRegionQuery:(id)arg1 comparator:(int)arg2;
- (void)addCodecQuery:(id)arg1 comparator:(int)arg2;
- (void)addDateRangeQueryKey:(int)arg1 between:(id)arg2 and:(id)arg3;
- (void)addDescriptionQuery:(id)arg1 comparator:(int)arg2;
- (void)addDoubleQueryKey:(int)arg1 withValue:(double)arg2 comparator:(int)arg3;
- (void)addDurationQuery:(double)arg1 comparator:(int)arg2;
- (void)addExposureBiasQuery:(double)arg1 comparator:(int)arg2;
- (void)addFilenameQuery:(id)arg1 comparator:(int)arg2;
- (void)addFlashQuery:(bool)arg1;
- (void)addFocalLengthQuery:(double)arg1 comparator:(int)arg2;
- (void)addFpsQuery:(double)arg1 comparator:(int)arg2;
- (void)addHasLocationQuery:(bool)arg1;
- (void)addInTheLastDaysQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(bool)arg3;
- (void)addInTheLastMonthsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(bool)arg3;
- (void)addInTheLastSecondsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(bool)arg3;
- (void)addInTheLastWeeksQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(bool)arg3;
- (void)addInTheLastYearsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(bool)arg3;
- (void)addIntegerQueryKey:(int)arg1 withValue:(long long)arg2 comparator:(int)arg3;
- (void)addIsAdjustedQuery:(bool)arg1;
- (void)addIsAfterDateQueryKey:(int)arg1 withDate:(id)arg2;
- (void)addIsBeforeDateQueryKey:(int)arg1 withDate:(id)arg2;
- (void)addIsDateQueryKey:(int)arg1 withDate:(id)arg2 exclude:(bool)arg3;
- (void)addIsEmptyQueryForKey:(int)arg1 isEmpty:(bool)arg2;
- (void)addIsFavoriteQuery:(bool)arg1;
- (void)addIsHiddenQuery:(bool)arg1;
- (void)addIsInAlbumQuery:(id)arg1;
- (void)addIsInAnyAlbumQuery;
- (void)addIsProResQuery:(bool)arg1;
- (void)addIsRawQuery:(bool)arg1;
- (void)addIsReferencedMediaQuery:(bool)arg1;
- (void)addIsoQuery:(long long)arg1 comparator:(int)arg2;
- (void)addIsoRangeQueryBetweenValue:(long long)arg1 andValue:(long long)arg2;
- (void)addKeywordQuery:(id)arg1 exclude:(bool)arg2;
- (void)addLensModelQuery:(id)arg1 comparator:(int)arg2;
- (void)addMeteringModeQuery:(long long)arg1 comparator:(int)arg2;
- (void)addPersonQuery:(id)arg1 comparator:(int)arg2;
- (void)addPersonUUIDInMomentQuery:(id)arg1 comparator:(int)arg2;
- (void)addPersonUUIDQuery:(id)arg1 comparator:(int)arg2;
- (void)addSampleRateQuery:(long long)arg1 comparator:(int)arg2;
- (void)addShutterSpeedQuery:(double)arg1 comparator:(int)arg2;
- (void)addTextQuery:(id)arg1 comparator:(int)arg2;
- (void)addTitleQuery:(id)arg1 comparator:(int)arg2;
- (void)addTrackFormatQuery:(long long)arg1 comparator:(int)arg2;
- (void)addUnableToUploadQuery;
- (void)addWhiteBalanceQuery:(long long)arg1 comparator:(int)arg2;
- (id)initWithConjunction:(int)arg1;
- (id)query;

@end
