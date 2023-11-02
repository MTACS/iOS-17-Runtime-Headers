
@interface TSULinkedPointerSetReverseEnumerator : NSEnumerator {
    TSULinkedPointerSetEntry * mLastUsed;
    TSULinkedPointerSetEntry * mTail;
}

- (id)initWithLastEntry:(id)arg1;
- (id)nextObject;

@end
