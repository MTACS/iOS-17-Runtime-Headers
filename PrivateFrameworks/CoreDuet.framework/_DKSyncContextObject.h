
@interface _DKSyncContextObject : NSObject {
    _DKSyncContext * _context;
}

@property (nonatomic, readonly) _DKSyncContext *context;

+ (id)new;

- (void).cxx_destruct;
- (id)context;
- (id)init;
- (id)initWithContext:(id)arg1;

@end
