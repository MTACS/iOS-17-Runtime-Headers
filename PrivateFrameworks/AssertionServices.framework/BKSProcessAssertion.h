
@interface BKSProcessAssertion : BKSAssertion {
    unsigned int  _flags;
    RBSAssertion * _mediaPlaybackHackAssertion;
    unsigned int  _reason;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) unsigned int reason;

+ (id)NameForReason:(unsigned int)arg1;

- (void).cxx_destruct;
- (unsigned long long)_legacyFlagsForFlags:(unsigned int)arg1;
- (unsigned long long)_legacyReasonForReason:(unsigned int)arg1;
- (bool)acquire;
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)dealloc;
- (unsigned int)flags;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5 acquire:(bool)arg6;
- (id)initWithBundleIdentifier:(id)arg1 pid:(int)arg2 flags:(unsigned int)arg3 reason:(unsigned int)arg4 name:(id)arg5 withHandler:(id /* block */)arg6 acquire:(bool)arg7;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5 acquire:(bool)arg6;
- (void)invalidate;
- (unsigned int)reason;
- (void)setFlags:(unsigned int)arg1;

@end
