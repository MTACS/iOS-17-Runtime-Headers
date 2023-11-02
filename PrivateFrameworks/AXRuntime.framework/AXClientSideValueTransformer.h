
@interface AXClientSideValueTransformer : NSObject

+ (id)_transformArrayWithUserStrings:(id)arg1;
+ (id)_transformAutomationDictionary:(id)arg1;
+ (id)_transformUserString:(id)arg1;
+ (bool)canTransformAttribute:(long long)arg1;
+ (id)transformValue:(id)arg1 forAttribute:(long long)arg2 withElement:(struct __AXUIElement { }*)arg3;
+ (Class)transformer;

@end
