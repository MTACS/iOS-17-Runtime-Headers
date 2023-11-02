
@interface SSVRedeemCodeItem : NSObject {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSDictionary *redeemCodeDictionary;

- (void).cxx_destruct;
- (id)initWithLookupItem:(id)arg1;
- (id)initWithRedeemCodeDictionary:(id)arg1;
- (long long)itemIdentifier;
- (id)redeemCodeDictionary;

@end
