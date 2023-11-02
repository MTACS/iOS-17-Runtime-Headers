
@interface RUIDetailButtonElement : RUIElement {
    long long  _visibility;
}

@property (nonatomic) long long visibility;

- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)setVisibility:(long long)arg1;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (long long)visibility;

@end
