
@interface TSULinkedPointerSetEntry : NSObject {
    TSULinkedPointerSetEntry * mNext;
    id  mObject;
    TSULinkedPointerSetEntry * mPrevious;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 previousEntry:(id)arg2;

@end
