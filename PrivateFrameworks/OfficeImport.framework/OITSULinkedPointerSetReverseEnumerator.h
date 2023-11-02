
@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator {
    OITSULinkedPointerSetEntry * mLastUsed;
    OITSULinkedPointerSetEntry * mTail;
}

- (id)initWithLastEntry:(id)arg1;
- (id)nextObject;

@end
