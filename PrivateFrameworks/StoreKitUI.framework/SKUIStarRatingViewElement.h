
@interface SKUIStarRatingViewElement : SKUIViewElement {
    bool  _enabled;
    float  _ratingValue;
    long long  _starType;
    SKUIViewElementText * _text;
}

@property (nonatomic, readonly) float ratingValue;
@property (nonatomic, readonly) long long starType;
@property (nonatomic, readonly) SKUIViewElementText *text;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (float)ratingValue;
- (long long)starType;
- (id)text;

@end
