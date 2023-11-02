
@interface NMSObfuscatableDescription : NSObject {
    NSMutableArray * _items;
    NSString * _prefixString;
}

@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSString *prefixString;

- (void).cxx_destruct;
- (id)CPSafeDescription;
- (id)_descriptionObfuscated:(bool)arg1;
- (void)addDescription:(id)arg1 value:(id)arg2;
- (void)addObfuscatedDescription:(id)arg1 value:(id)arg2;
- (id)description;
- (id)init;
- (id)items;
- (id)prefixString;
- (void)setItems:(id)arg1;
- (void)setPrefixString:(id)arg1;

@end
