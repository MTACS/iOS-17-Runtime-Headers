
@interface FINodeIterator : NSObject {
    struct OpaqueNodeIterator { } * _iterator;
}

@property (nonatomic, readonly) unsigned long long estimatedSize;
@property (nonatomic, readonly) bool fullyPopulated;

+ (id)iteratorForFINode:(id)arg1 includingInvisibleItems:(bool)arg2;
+ (id)iteratorForFINode:(id)arg1 synchronous:(bool)arg2 includingInvisibleItems:(bool)arg3;

- (void)dealloc;
- (unsigned long long)estimatedSize;
- (id)first;
- (bool)fullyPopulated;
- (id)initWithIterator:(struct OpaqueNodeIterator { }*)arg1;
- (id)next;

@end
