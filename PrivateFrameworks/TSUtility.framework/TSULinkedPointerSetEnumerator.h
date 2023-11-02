
@interface TSULinkedPointerSetEnumerator : NSEnumerator {
    TSULinkedPointerSetEntry * mHead;
    TSULinkedPointerSetEntry * mLastUsed;
}

- (id)initWithFirstEntry:(id)arg1;
- (id)nextObject;

@end
