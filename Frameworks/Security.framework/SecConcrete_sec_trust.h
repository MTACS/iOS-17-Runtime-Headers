
@interface SecConcrete_sec_trust : NSObject <OS_sec_trust> {
    struct __SecTrust { } * trust;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;

@end
