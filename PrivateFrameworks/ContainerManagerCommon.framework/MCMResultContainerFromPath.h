
@interface MCMResultContainerFromPath : MCMResultWithContainerBase {
    NSString * _relativePath;
}

@property (nonatomic, retain) NSString *relativePath;

- (void).cxx_destruct;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)initWithUUID:(id)arg1 containerPathIdentifier:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 POSIXUser:(id)arg5 personaUniqueString:(id)arg6 sandboxToken:(const char *)arg7 existed:(bool)arg8 url:(id)arg9 info:(id)arg10 transient:(bool)arg11 userManagedAssetsRelPath:(id)arg12 relativePath:(id)arg13;
- (id)relativePath;
- (void)setRelativePath:(id)arg1;

@end
