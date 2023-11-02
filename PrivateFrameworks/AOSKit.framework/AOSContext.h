
@interface AOSContext : NSObject <NSPortDelegate> {
    struct AOSAccount { } * _account;
    int (* _callback;
    NSThread * _callbackThread;
    id  _info;
    struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id /* block */ x7; id x8; void *x9; id x10; int (*x11)(); int (*x12)(); } * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextWithAccount:(struct AOSAccount { }*)arg1 andTransaction:(struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id /* block */ x7; id x8; void *x9; id x10; int (*x11)(); int (*x12)(); }*)arg2;

- (id)_callbackThread;
- (void)_performCallback;
- (struct AOSAccount { }*)account;
- (void)dealloc;
- (void)finalize;
- (id)info;
- (id)init;
- (bool)scheduleCallback;
- (void)setAccount:(struct AOSAccount { }*)arg1;
- (void)setInfo:(id)arg1;
- (void)setTransaction:(struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id /* block */ x7; id x8; void *x9; id x10; int (*x11)(); int (*x12)(); }*)arg1;
- (struct AOSTransactionC { Class x1; unsigned char x2; unsigned char x3; void *x4; struct __CFError {} *x5; int (*x6)(); id /* block */ x7; id x8; void *x9; id x10; int (*x11)(); int (*x12)(); }*)transaction;

@end
