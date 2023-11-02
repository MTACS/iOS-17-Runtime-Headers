
@interface PHASEServiceSharedEntityDebugInfo : NSObject <NSSecureCoding> {
    NSDictionary * _sessionSharedRoots;
    PHASESharedListenerDebugInfo * _sharedListener;
}

@property (nonatomic, readonly, copy) NSDictionary *sessionSharedRoots;
@property (nonatomic, readonly) PHASESharedListenerDebugInfo *sharedListener;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sessionSharedRoots;
- (void)setSessionSharedRoots:(id)arg1;
- (void)setSharedListener:(id)arg1;
- (id)sharedListener;

@end
