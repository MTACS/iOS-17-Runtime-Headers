
@interface TMLDictionary : NSObject {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSArray *keys;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)dictionary;
- (id)get:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)keys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)set:(id)arg1 value:(id)arg2;
- (void)setDictionary:(id)arg1;
- (id)union:(id)arg1;

@end
