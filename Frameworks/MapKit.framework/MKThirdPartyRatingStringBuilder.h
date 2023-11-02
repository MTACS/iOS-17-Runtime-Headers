
@interface MKThirdPartyRatingStringBuilder : NSObject <MKRatingStringProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)carPlayHeaderStringForMapItem:(id)arg1 titleAttributes:(id)arg2 providerAttributes:(id)arg3;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;
+ (id)ratingColorForMapItem:(id)arg1;
+ (id)ratingSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4;
+ (id)ratingSymbolName;

@end
