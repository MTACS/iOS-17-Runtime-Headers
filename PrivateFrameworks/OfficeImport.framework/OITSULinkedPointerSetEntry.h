
@interface OITSULinkedPointerSetEntry : NSObject {
    OITSULinkedPointerSetEntry * mNext;
    id  mObject;
    OITSULinkedPointerSetEntry * mPrevious;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 previousEntry:(id)arg2;

@end
