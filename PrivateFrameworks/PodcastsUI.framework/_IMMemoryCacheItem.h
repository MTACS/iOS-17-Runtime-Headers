
@interface _IMMemoryCacheItem : NSObject {
    bool  _conformsToProtocol;
    unsigned long long  _cost;
    id  _item;
    NSString * _keyString;
    unsigned long long  _timeStamp;
}

@property (nonatomic) bool conformsToProtocol;
@property (nonatomic) unsigned long long cost;
@property (nonatomic, retain) id item;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) unsigned long long timeStamp;

+ (id)cacheItemWithItem:(id)arg1 key:(id)arg2 cost:(unsigned long long)arg3;

- (void).cxx_destruct;
- (bool)conformsToProtocol;
- (unsigned long long)cost;
- (id)description;
- (id)item;
- (id)key;
- (void)setConformsToProtocol:(bool)arg1;
- (void)setCost:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)timeStamp;

@end
