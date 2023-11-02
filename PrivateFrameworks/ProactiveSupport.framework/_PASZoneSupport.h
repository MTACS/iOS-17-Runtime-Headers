
@interface _PASZoneSupport : NSObject

+ (id)copyArray:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)copyData:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)copyDate:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)copyDictionary:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)copyNumber:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)copySet:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)copyString:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)copyUUID:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)deepCopyObject:(id)arg1 toZone:(struct _NSZone { }*)arg2 strategy:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })arg3;
+ (id)mutableCopyArray:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)mutableCopyData:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)mutableCopyDictionary:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)mutableCopySet:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)mutableCopyString:(id)arg1 toZone:(struct _NSZone { }*)arg2;
+ (id)newMutableArrayInZone:(struct _NSZone { }*)arg1;
+ (id)newMutableArrayInZone:(struct _NSZone { }*)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableDataInZone:(struct _NSZone { }*)arg1;
+ (id)newMutableDataInZone:(struct _NSZone { }*)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableDataInZone:(struct _NSZone { }*)arg1 length:(unsigned long long)arg2;
+ (id)newMutableDictionaryInZone:(struct _NSZone { }*)arg1;
+ (id)newMutableDictionaryInZone:(struct _NSZone { }*)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableSetInZone:(struct _NSZone { }*)arg1;
+ (id)newMutableSetInZone:(struct _NSZone { }*)arg1 capacity:(unsigned long long)arg2;
+ (id)newMutableStringInZone:(struct _NSZone { }*)arg1;
+ (id)newMutableStringInZone:(struct _NSZone { }*)arg1 capacity:(unsigned long long)arg2;

@end
