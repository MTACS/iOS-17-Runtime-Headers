
@interface SKUIBarRatingViewElement : SKUIViewElement {
    float  _ratingValue;
}

@property (nonatomic, readonly) float ratingValue;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (float)ratingValue;

@end
