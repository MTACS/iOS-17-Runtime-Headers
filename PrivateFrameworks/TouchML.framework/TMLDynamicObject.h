
@interface TMLDynamicObject : NSObject {
    NSMutableDictionary * _properties;
}

@property (nonatomic, readonly) NSMutableDictionary *properties;

+ (id)dynamicPropertyType:(id)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)properties;

@end
