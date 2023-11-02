
@interface MKFirstPartyRatingStringBuilder : NSObject <MKRatingStringProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_colorForPercentage:(double)arg1;
+ (id)carPlayHeaderStringForMapItem:(id)arg1 titleAttributes:(id)arg2 providerAttributes:(id)arg3;
+ (id)percentageStringForMapItem:(id)arg1 showNumberOfRatings:(bool)arg2 textColor:(id)arg3 font:(id)arg4 theme:(id)arg5;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;
+ (id)ratingColorForMapItem:(id)arg1;
+ (id)ratingPercentageAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;
+ (id)ratingStringForPercentage:(double)arg1 font:(id)arg2 color:(id)arg3 includeGlyph:(bool)arg4;
+ (id)ratingSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;
+ (id)ratingSymbolName;
+ (id)thumbRecommendStringWithMapItem:(id)arg1 font:(id)arg2 includeGlyph:(bool)arg3;
+ (id)userRecommendationStringWithFont:(id)arg1 ratingState:(long long)arg2 numberOfPhotosAdded:(unsigned long long)arg3;
+ (id)userRecommendedRatingSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;

@end
