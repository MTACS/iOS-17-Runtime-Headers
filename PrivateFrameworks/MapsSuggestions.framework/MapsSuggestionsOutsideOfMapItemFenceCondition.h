
@interface MapsSuggestionsOutsideOfMapItemFenceCondition : MapsSuggestionsBaseCondition {
    GEOMapItemStorage * _mapItem;
    double  _radius;
}

- (void).cxx_destruct;
- (id)initWithMapItem:(id)arg1 radius:(double)arg2;
- (bool)isTrue;

@end
