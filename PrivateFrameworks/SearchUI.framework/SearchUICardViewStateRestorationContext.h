
@interface SearchUICardViewStateRestorationContext : SearchUICollectionViewRestorationContext <NSSecureCoding> {
    SFCard * _card;
    unsigned long long  _level;
}

@property (retain) SFCard *card;
@property unsigned long long level;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)card;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)level;
- (void)setCard:(id)arg1;
- (void)setLevel:(unsigned long long)arg1;

@end
