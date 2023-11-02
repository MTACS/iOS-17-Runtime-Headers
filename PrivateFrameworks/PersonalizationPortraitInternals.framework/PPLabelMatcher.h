
@interface PPLabelMatcher : NSObject {
    NSDictionary * _map;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_generateMap;
- (id)init;
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;

@end
