
@interface SKUIVideoViewElement : SKUIViewElement {
    BOOL  _enabled;
    long long  _itemIdentifier;
    long long  _kind;
    long long  _playbackStyle;
    SKUIImageViewElement * _thumbnailImage;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) SKUIImageViewElement *thumbnailImage;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)assets;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)itemIdentifier;
- (long long)kind;
- (long long)playbackStyle;
- (id)thumbnailImage;

@end
