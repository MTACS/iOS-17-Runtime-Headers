
@interface LADecriptionBuilder : NSObject {
    NSMutableDictionary * _components;
    NSObject * _object;
}

- (void).cxx_destruct;
- (void)appendBool:(bool)arg1 withName:(id)arg2;
- (void)appendInteger:(long long)arg1 withName:(id)arg2;
- (void)appendObject:(id)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (id)build;
- (id)initWithObject:(id)arg1;

@end
