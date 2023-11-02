
@interface ASCOfferPresenterViewState : NSObject <NSCopying> {
    ASCOfferMetadata * _metadata;
    ASCOfferTheme * _theme;
}

@property (nonatomic, readonly, copy) ASCOfferMetadata *metadata;
@property (nonatomic, readonly, copy) ASCOfferTheme *theme;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMetadata:(id)arg1 theme:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)theme;

@end
