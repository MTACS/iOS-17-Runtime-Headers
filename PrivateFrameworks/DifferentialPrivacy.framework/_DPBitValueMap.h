
@interface _DPBitValueMap : NSObject {
    NSString * _key;
    NSDictionary * _map;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) NSDictionary *map;

+ (id)bitValueMapForKey:(id)arg1;
+ (id)bitValueMapForKey:(id)arg1 bitValueMapsDirectory:(id)arg2;
+ (id)bitValueMapForKey:(id)arg1 fromConfigurationsFile:(id)arg2;
+ (void)initialize;
+ (void)removeBitValueMapForKey:(id)arg1;

- (void).cxx_destruct;
- (id)bitValueForString:(id)arg1;
- (id)init;
- (id)initWithKey:(id)arg1 bitValueMapsDirectory:(id)arg2;
- (id)key;
- (id)map;

@end
