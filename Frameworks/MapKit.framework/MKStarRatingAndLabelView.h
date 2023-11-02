
@interface MKStarRatingAndLabelView : UIView

+ (id)ratingAndReviewsAsAttributedString:(double)arg1 style:(long long)arg2 font:(id)arg3 numberOfReviews:(unsigned long long)arg4 textColor:(id)arg5 theme:(id)arg6;
+ (id)reviewsString:(unsigned long long)arg1 providerName:(id)arg2;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(bool)arg4 showNumberOfReviews:(bool)arg5 ratingStyle:(long long)arg6 theme:(id)arg7;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(bool)arg4 theme:(id)arg5;

@end
