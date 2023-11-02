
@interface ACNotifyReader : NSObject <ACNotifyReading> {
    unsigned long long  _cachedValue;
    NSString * _key;
    int  _notifierToken;
}

@property (nonatomic) unsigned long long cachedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *key;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)cachedValue;
- (unsigned long long)currentValue;
- (id)initWithKey:(id)arg1;
- (id)key;
- (void)setCachedValue:(unsigned long long)arg1;
- (void)setKey:(id)arg1;

@end
