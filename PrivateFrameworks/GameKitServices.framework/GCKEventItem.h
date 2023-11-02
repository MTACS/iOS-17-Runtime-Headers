
@interface GCKEventItem : NSObject {
    struct { int x1; char *x2; int x3; unsigned int x4; } * _event;
    unsigned int  _pid;
}

@property struct { int x1; char *x2; int x3; unsigned int x4; }*event;
@property unsigned int pid;

- (void)dealloc;
- (struct { int x1; char *x2; int x3; unsigned int x4; }*)event;
- (id)init;
- (id)initWithEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 remotePeer:(unsigned int)arg2;
- (unsigned int)pid;
- (void)setEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1;
- (void)setPid:(unsigned int)arg1;

@end
