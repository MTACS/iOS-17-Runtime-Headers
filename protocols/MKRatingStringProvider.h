
@protocol MKRatingStringProvider <NSObject>

@required

+ (NSAttributedString *)carPlayHeaderStringForMapItem:(MKMapItem *)arg1 titleAttributes:(NSDictionary *)arg2 providerAttributes:(NSDictionary *)arg3;
+ (NSAttributedString *)ratingAndReviewSummaryAttributedStringForMapItem:(MKMapItem *)arg1 textColor:(UIColor *)arg2 font:(UIFont *)arg3 theme:(id <MKInfoCardTheme>)arg4;
+ (UIColor *)ratingColorForMapItem:(MKMapItem *)arg1;
+ (NSAttributedString *)ratingSummaryAttributedStringForMapItem:(MKMapItem *)arg1 textColor:(UIColor *)arg2 font:(UIFont *)arg3 theme:(id <MKInfoCardTheme>)arg4;
+ (NSString *)ratingSymbolName;

@end
