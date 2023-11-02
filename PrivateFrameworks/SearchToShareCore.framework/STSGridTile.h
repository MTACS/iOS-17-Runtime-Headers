
@interface STSGridTile : NSObject {
    NSNumber * _largeIndex;
    long long  _layoutStyle;
    NSArray * _smallIndexes;
}

@property (nonatomic, retain) NSNumber *largeIndex;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, copy) NSArray *smallIndexes;

- (void).cxx_destruct;
- (id)description;
- (id)largeIndex;
- (long long)layoutStyle;
- (void)setLargeIndex:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setSmallIndexes:(id)arg1;
- (id)smallIndexes;

@end
