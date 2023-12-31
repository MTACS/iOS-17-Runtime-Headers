
@interface FCAccessCheckResult : NSObject <NSCopying> {
    unsigned long long  _blockedReason;
    bool  _canAccess;
}

@property (nonatomic, readonly) unsigned long long blockedReason;
@property (nonatomic, readonly) bool canAccess;

- (unsigned long long)blockedReason;
- (bool)canAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCanAccess:(bool)arg1 blockedReason:(unsigned long long)arg2;

@end
