
@interface PKMentionQueryItem : PKDetectionQueryItem {
    CHPrefixQueryItem * _coreHandwritingPrefixQueryItem;
    NSString * _mentionResult;
}

@property (nonatomic, retain) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (nonatomic, copy) NSString *mentionResult;

- (void).cxx_destruct;
- (id)baselinePath;
- (id)coreHandwritingPrefixQueryItem;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mentionResult;
- (void)setCoreHandwritingPrefixQueryItem:(id)arg1;
- (void)setMentionResult:(id)arg1;
- (id)strokeIdentifiers;

@end
