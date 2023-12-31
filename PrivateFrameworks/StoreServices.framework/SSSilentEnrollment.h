
@interface SSSilentEnrollment : SSRequest <SSXPCCoding> {
    SSSilentEnrollmentContext * _context;
}

@property (retain) SSSilentEnrollmentContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)copyXPCEncoding;
- (id)initWithSilentEnrollmentContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setContext:(id)arg1;

@end
