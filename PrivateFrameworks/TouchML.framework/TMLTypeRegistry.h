
@interface TMLTypeRegistry : NSObject

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)classNameForType:(unsigned long long)arg1;
+ (id)encodedTypeForType:(unsigned long long)arg1;
+ (unsigned long long)typeForEncodedType:(id)arg1;
+ (unsigned long long)typeForTypeName:(id)arg1;
+ (id)typeNameForType:(unsigned long long)arg1;

@end
