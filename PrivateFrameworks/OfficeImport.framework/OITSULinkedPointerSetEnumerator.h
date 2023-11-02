
@interface OITSULinkedPointerSetEnumerator : NSEnumerator {
    OITSULinkedPointerSetEntry * mHead;
    OITSULinkedPointerSetEntry * mLastUsed;
}

- (id)initWithFirstEntry:(id)arg1;
- (id)nextObject;

@end
