
@interface SUUITomatoRatingViewElement : SUUIViewElement {
    long long  _freshness;
    SUUIViewElementText * _ratingText;
    float  _tomatoRating;
}

@property (nonatomic, readonly) long long freshness;
@property (nonatomic, readonly) SUUIViewElementText *ratingText;
@property (nonatomic, readonly) float tomatoRating;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)freshness;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)ratingText;
- (float)tomatoRating;

@end
