
@interface UINibEncoder : NSCoder {
    bool  _unorderedCollectionSortingEnabled;
    NSMutableData * data;
    id  delegate;
    struct __CFSet { } * encodedObjects;
    struct __CFArray { } * encodedOrderedObjects;
    unsigned int  nextObjectID;
    struct __CFDictionary { } * objectIDsToObjects;
    struct __CFSet { } * objectsReplacedWithNil;
    struct __CFDictionary { } * objectsToObjectIDs;
    struct __CFSet { } * objectsUniquedByValue;
    struct { 
        unsigned int currentObjectID; 
        unsigned int nextAnonymousKey; 
    }  recursiveState;
    struct __CFDictionary { } * replacements;
    struct __CFArray { } * values;
}

@property id delegate;
@property (getter=isUnorderedCollectionSortingEnabled, nonatomic) bool unorderedCollectionSortingEnabled;

+ (bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;

- (bool)allowsKeyedCoding;
- (void)appendValue:(id)arg1;
- (id)assignObjectIDForObject:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeArrayOfCGFloats:(double*)arg1 count:(long long)arg2 forKey:(id)arg3;
- (void)encodeArrayOfDoubles:(double*)arg1 count:(long long)arg2 forKey:(id)arg3;
- (void)encodeArrayOfFloats:(float*)arg1 count:(long long)arg2 forKey:(id)arg3;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (Class)encodedClassForObject:(id)arg1;
- (id)encodedClassNameForClass:(Class)arg1;
- (id)encodedClassNameForObject:(id)arg1;
- (void)finishEncoding;
- (id)initForWritingWithMutableData:(id)arg1;
- (bool)isUnorderedCollectionSortingEnabled;
- (id)nextGenericKey;
- (bool)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2;
- (bool)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2;
- (id)objectIDForObject:(id)arg1;
- (bool)previouslyCodedObject:(id)arg1;
- (id)replacementObjectForObject:(id)arg1 forKey:(id)arg2;
- (void)serializeArray:(id)arg1;
- (void)serializeDictionary:(id)arg1;
- (void)serializeObject:(id)arg1;
- (void)serializeSet:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUnorderedCollectionSortingEnabled:(bool)arg1;
- (bool)shouldUniqueObjectByValue:(id)arg1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

@end
