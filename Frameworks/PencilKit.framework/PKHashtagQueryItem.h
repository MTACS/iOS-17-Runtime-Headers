
@interface PKHashtagQueryItem : PKDetectionQueryItem {
    CHPrefixQueryItem * _coreHandwritingPrefixQueryItem;
    NSString * _hashtagResult;
}

@property (nonatomic, retain) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (nonatomic, copy) NSString *hashtagResult;

- (void).cxx_destruct;
- (id)baselinePath;
- (id)coreHandwritingPrefixQueryItem;
- (id)hashtagResult;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCoreHandwritingPrefixQueryItem:(id)arg1;
- (void)setHashtagResult:(id)arg1;
- (id)strokeIdentifiers;

@end
