
@interface TCPBufferPool : NSObject {
    struct tagBufferNode { char *x1; int x2; int x3; struct tagBufferNode {} *x4; } * avail;
    struct tagBufferNode { char *x1; int x2; int x3; struct tagBufferNode {} *x4; } * head;
    int  poolLock;
    int  poolSize;
    struct tagBufferNode { char *x1; int x2; int x3; struct tagBufferNode {} *x4; } * tail;
}

- (void)dealloc;
- (char *)getBufferFromPool:(int)arg1;
- (id)init;
- (void)monitorBufferPool;
- (void)returnBufferToPool:(char *)arg1;

@end
