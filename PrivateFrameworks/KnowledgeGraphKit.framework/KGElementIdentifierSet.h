
@interface KGElementIdentifierSet : NSObject <NSCopying> {
    struct Bitmap { 
        unsigned long long _bitCount; 
        unsigned long long _lastOffsetFoundAt; 
        struct vector<degas::BitsetPtr, std::allocator<degas::BitsetPtr>> { 
            struct BitsetPtr {} *__begin_; 
            struct BitsetPtr {} *__end_; 
            struct __compressed_pair<degas::BitsetPtr *, std::allocator<degas::BitsetPtr>> { 
                struct BitsetPtr {} *__value_; 
            } __end_cap_; 
        } _bitSets; 
        bool _dirty; 
    }  _bitmap;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long firstElement;
@property (nonatomic, readonly, copy) NSArray *indexArray;
@property (nonatomic, readonly, copy) NSIndexSet *indexSet;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) unsigned long long lastElement;

+ (void)drainBitsetPool;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)bitmap;
- (bool)containsIdentifier:(unsigned long long)arg1;
- (bool)containsIdentifierSet:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)elementAtOffset:(unsigned long long)arg1;
- (struct KGElementIdentifierSetIndex { unsigned long long x1; long long x2; })endIndex;
- (void)enumerateIdentifiersWithBlock:(id /* block */)arg1;
- (id)extractRangeByIndex:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)firstElement;
- (unsigned long long)hash;
- (id)identifierSetByAddingIdentifier:(unsigned long long)arg1;
- (id)identifierSetByFilteringUsingBlock:(id /* block */)arg1;
- (id)identifierSetByFormingSymmetricDifferenceWithIdentifierSet:(id)arg1;
- (id)identifierSetByFormingUnion:(id)arg1;
- (id)identifierSetByIntersectingIdentifierSet:(id)arg1;
- (id)identifierSetByRemovingIdentifier:(unsigned long long)arg1;
- (id)identifierSetBySubtractingIdentifierSet:(id)arg1;
- (struct KGElementIdentifierSetIndex { unsigned long long x1; long long x2; })indexAfterIndex:(struct KGElementIdentifierSetIndex { unsigned long long x1; long long x2; })arg1;
- (id)indexArray;
- (id)indexSet;
- (struct KGElementIdentifierSetIndex { unsigned long long x1; long long x2; })indexWithIterator:(const void*)arg1;
- (id)init;
- (id)initWithBitmap:(const void*)arg1;
- (id)initWithElementIdentifier:(unsigned long long)arg1;
- (id)initWithIndexArray:(id)arg1;
- (id)initWithIndexCollection:(id)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithLiteralData:(id)arg1;
- (bool)intersectsIdentifierSet:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToElementIdentifierSet:(id)arg1;
- (bool)isSubsetOfIdentifierSet:(id)arg1;
- (unsigned long long)lastElement;
- (id)literalDataRepresentation;
- (void*)mutableBitmap;
- (id)mutableCopy;
- (id)prefix:(unsigned long long)arg1;
- (unsigned long long)randomElement;
- (struct KGElementIdentifierSetIndex { unsigned long long x1; long long x2; })startIndex;

@end
