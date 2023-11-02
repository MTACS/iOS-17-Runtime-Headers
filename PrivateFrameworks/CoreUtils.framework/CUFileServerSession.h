
@interface CUFileServerSession : NSObject {
    BOOL  _dirPath;
    struct { int x1; long long x2; long long x3; char *x4; int x5; long long x6; long long x7; int x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _telldir {} *x10; } * _dirStream;
    unsigned long long  _lastRequestTicks;
    unsigned long long  _sessionID;
}

@property (nonatomic) struct { int x1; long long x2; long long x3; char *x4; int x5; long long x6; long long x7; int x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _telldir {} *x10; }*dirStream;
@property (nonatomic) unsigned long long lastRequestTicks;
@property (nonatomic) unsigned long long sessionID;

- (struct { int x1; long long x2; long long x3; char *x4; int x5; long long x6; long long x7; int x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _telldir {} *x10; }*)dirStream;
- (unsigned long long)lastRequestTicks;
- (unsigned long long)sessionID;
- (void)setDirStream:(struct { int x1; long long x2; long long x3; char *x4; int x5; long long x6; long long x7; int x8; struct _opaque_pthread_mutex_t { long long x_9_1_1; BOOL x_9_1_2[56]; } x9; struct _telldir {} *x10; }*)arg1;
- (void)setLastRequestTicks:(unsigned long long)arg1;
- (void)setSessionID:(unsigned long long)arg1;

@end
