
@interface PKDiscoveryCardViewTemplateInformation : NSObject {
    long long  _cardSize;
    long long  _displayType;
}

@property (nonatomic) long long cardSize;
@property (nonatomic) long long displayType;

- (long long)cardSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)displayType;
- (id)initWithCardSize:(long long)arg1 displayType:(long long)arg2;
- (void)setCardSize:(long long)arg1;
- (void)setDisplayType:(long long)arg1;
- (void)updateCardSize:(long long)arg1;

@end
