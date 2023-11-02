
@interface IMRuntimeUtil : NSObject

+ (void)associateBoolValue:(bool)arg1 forKey:(id)arg2 onObject:(id)arg3;
+ (void)associateBoolValue:(bool)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4;
+ (void)associateDoubleValue:(double)arg1 forKey:(id)arg2 onObject:(id)arg3;
+ (void)associateDoubleValue:(double)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4;
+ (void)associateFloatValue:(float)arg1 forKey:(id)arg2 onObject:(id)arg3;
+ (void)associateFloatValue:(float)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4;
+ (void)associateIntValue:(long long)arg1 forKey:(id)arg2 onObject:(id)arg3;
+ (void)associateIntValue:(long long)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4;
+ (void)associateValue:(id)arg1 forKey:(id)arg2 onObject:(id)arg3;
+ (void)associateValue:(id)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4;
+ (bool)associatedBoolValueForKey:(id)arg1 onObject:(id)arg2;
+ (bool)associatedBoolValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(bool)arg3;
+ (double)associatedDoubleValueForKey:(id)arg1 onObject:(id)arg2;
+ (double)associatedDoubleValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(double)arg3;
+ (float)associatedFloatValueForKey:(id)arg1 onObject:(id)arg2;
+ (float)associatedFloatValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(float)arg3;
+ (long long)associatedIntValueForKey:(id)arg1 onObject:(id)arg2;
+ (long long)associatedIntValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(long long)arg3;
+ (id)associatedValueForKey:(id)arg1 onObject:(id)arg2;
+ (id)associatedValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(id)arg3;
+ (void)swizzleClassMethod:(SEL)arg1 onClass:(Class)arg2 withReplacementBlock:(id /* block */)arg3;
+ (void)swizzleMethod:(SEL)arg1 onClass:(Class)arg2 withReplacementBlock:(id /* block */)arg3;

@end
