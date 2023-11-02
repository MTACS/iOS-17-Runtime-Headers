
@interface PHEntityKeyMap : NSObject {
    NSDictionary * _entityKeysByPropertyKey;
    NSDictionary * _propertyKeysByEntityKey;
}

+ (void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(id)arg3;
+ (id)transposePropertyKeysByEntityKey:(id)arg1;

- (void).cxx_destruct;
- (id)entityKeyForPropertyKey:(id)arg1;
- (id)initWithPropertyKeysByEntityKey:(id)arg1;
- (id)propertyKeyForEntityKey:(id)arg1;

@end
