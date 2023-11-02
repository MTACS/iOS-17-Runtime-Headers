
@protocol MCMClientIdentityCache <NSObject>

@required

- (MCMClientIdentity *)clientIdentityWithAuditToken:(void *)arg1 personaUniqueString:(void *)arg2 error:(void *)arg3 generator:(void *)arg4; // needs 4 arg types, found 9: struct { unsigned int x1[8]; }, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, MCMClientIdentity *, id /* block */, id*, void*
- (void)flush;

@end
