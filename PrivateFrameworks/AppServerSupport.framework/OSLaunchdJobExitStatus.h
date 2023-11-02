
@interface OSLaunchdJobExitStatus : NSObject {
    unsigned long long  _os_reason_code;
    unsigned long long  _os_reason_flags;
    unsigned int  _os_reason_namespace;
    int  _wait4Status;
}

@property (nonatomic, readonly) unsigned long long os_reason_code;
@property (nonatomic, readonly) unsigned long long os_reason_flags;
@property (nonatomic, readonly) unsigned int os_reason_namespace;
@property (nonatomic, readonly) int wait4Status;

- (id)description;
- (id)initWithWait4Status:(int)arg1 os_reason_namespace:(unsigned int)arg2 os_reason_code:(unsigned long long)arg3 os_reason_flags:(unsigned long long)arg4;
- (unsigned long long)os_reason_code;
- (unsigned long long)os_reason_flags;
- (unsigned int)os_reason_namespace;
- (int)wait4Status;

@end
