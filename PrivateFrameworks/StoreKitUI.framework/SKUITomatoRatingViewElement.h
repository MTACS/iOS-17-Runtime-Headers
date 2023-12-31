
@interface SKUITomatoRatingViewElement : SKUIViewElement {
    long long  _freshness;
    SKUIViewElementText * _ratingText;
    float  _tomatoRating;
}

@property (nonatomic, readonly) long long freshness;
@property (nonatomic, readonly) SKUIViewElementText *ratingText;
@property (nonatomic, readonly) float tomatoRating;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)freshness;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)ratingText;
- (float)tomatoRating;

@end
