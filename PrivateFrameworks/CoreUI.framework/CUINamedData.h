
@interface CUINamedData : CUINamedLookup

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *utiType;

- (id)data;
- (id)description;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (id)utiType;

@end
