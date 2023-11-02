
@interface MTDictionaryDiff : NSObject {
    NSMutableArray * _callbacks;
    NSDictionary * _dictionary;
    NSSet * _properties;
}

@property (nonatomic, retain) NSMutableArray *callbacks;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) NSSet *properties;

- (void).cxx_destruct;
- (void)addCallback:(id /* block */)arg1;
- (id)callbacks;
- (id)dictionary;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (id)properties;
- (void)setCallbacks:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setProperties:(id)arg1;

@end
