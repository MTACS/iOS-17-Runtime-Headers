
@interface GEOResourceRequesterRemoteProxy : NSObject <GEOResourceRequesterProxy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchResources:(id)arg1 force:(bool)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 signpostID:(unsigned long long)arg5 queue:(id)arg6 handler:(id /* block */)arg7;

@end
