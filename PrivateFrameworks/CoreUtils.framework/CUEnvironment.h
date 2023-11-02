
@interface CUEnvironment : NSObject {
    NSMutableDictionary * _objects;
}

- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
