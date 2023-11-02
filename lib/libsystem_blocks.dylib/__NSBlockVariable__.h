
@interface __NSBlockVariable__ : NSObject {
    int (* byref_destroy;
    int (* byref_keep;
    id  containedObject;
    int  flags;
    struct Block_byref { void *x1; struct Block_byref {} *x2; int x3; unsigned int x4; } * forwarding;
    int  size;
}

@end
