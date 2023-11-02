
@interface STSizeDict : NSObject {
    NSDictionary * _dictionary;
}

@property (readonly) NSDictionary *dictionary;
@property (readonly) STSizeVector *total;

- (void).cxx_destruct;
- (id)dictionary;
- (id)get:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)plus:(id)arg1;
- (id)remapKeys:(id)arg1 removeMissing:(bool)arg2;
- (id)total;

@end
