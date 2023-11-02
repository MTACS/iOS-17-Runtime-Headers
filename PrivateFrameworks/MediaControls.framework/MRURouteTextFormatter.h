
@interface MRURouteTextFormatter : NSObject {
    MRURouteTextFormatterConfiguration * _configuration;
}

@property (nonatomic, retain) MRURouteTextFormatterConfiguration *configuration;

- (void).cxx_destruct;
- (id)bestStringForRouteNames:(id)arg1 designatedGroupLeaderName:(id)arg2 thatFitsWidth:(double)arg3;
- (long long)compareLength:(id)arg1 with:(id)arg2;
- (id)configuration;
- (id)formattedRouteNameForDesignatedGroupLeaderName:(id)arg1 truncatedDesignatedGroupLeaderName:(id)arg2 routeNamesText:(id)arg3;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)marketingNames;
- (id)plusSeparatedRouteNames:(id)arg1;
- (id)routeNamesSortedAlphanumeric:(id)arg1;
- (id)routeNamesSortedLength:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForText:(id)arg1;
- (id)text:(id)arg1 displayAsSiriSuggestion:(bool)arg2;
- (bool)text:(id)arg1 fitsInWidth:(double)arg2;
- (id)textForRoute:(id)arg1;
- (id)textForRoute:(id)arg1 textBoundingWidth:(double)arg2;
- (id)textForRouteNames:(id)arg1;
- (id)textForRouteNames:(id)arg1 textBoundingWidth:(double)arg2;
- (id)truncateText:(id)arg1 by:(long long)arg2;

@end
