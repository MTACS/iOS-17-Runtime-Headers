
@protocol _MKInfoCardAnalyticsDelegate <NSObject>

@required

- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(NSString *)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(NSString *)arg2 feedbackDelegateSelector:(int)arg3 actionRichProviderId:(NSString *)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 actionURL:(NSString *)arg4 photoID:(NSString *)arg5 moduleMetadata:(GEOAPPlaceCardModule *)arg6 feedbackDelegateSelector:(int)arg7 actionRichProviderId:(NSString *)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 feedbackDelegateSelector:(int)arg4 actionRichProviderId:(NSString *)arg5;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 moduleMetadata:(GEOAPPlaceCardModule *)arg4 feedbackDelegateSelector:(int)arg5 actionRichProviderId:(NSString *)arg6;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id <GEOTransitSystem>)arg4 transitDepartureSequence:(id <GEOTransitDepartureSequence>)arg5 transitCardCategory:(int)arg6 transitIncident:(id <GEOTransitIncident>)arg7 feedbackDelegateSelector:(int)arg8;

@end
