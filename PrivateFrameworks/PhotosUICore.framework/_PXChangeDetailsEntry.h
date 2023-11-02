
@interface _PXChangeDetailsEntry : NSObject {
    PXMutableArrayChangeDetails * _changeDetails;
    long long  _index;
    NSMutableArray * _subitemEntries;
}

@property (nonatomic, readonly) PXMutableArrayChangeDetails *changeDetails;
@property (nonatomic) long long index;
@property (nonatomic, readonly) NSDictionary *subitemChangesByItem;
@property (nonatomic, readonly) NSMutableArray *subitemEntries;

- (void).cxx_destruct;
- (void)addSubitemEntry:(id)arg1;
- (id)changeDetails;
- (long long)index;
- (id)initWithIndex:(long long)arg1 changeDetails:(id)arg2;
- (void)setIndex:(long long)arg1;
- (id)subitemChangesByItem;
- (id)subitemEntries;
- (void)updateWithSectionedChangeDetails:(id)arg1;

@end
