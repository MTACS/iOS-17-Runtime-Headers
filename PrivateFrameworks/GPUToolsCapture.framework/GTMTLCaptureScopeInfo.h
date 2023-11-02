
@interface GTMTLCaptureScopeInfo : NSObject

+ (void)addScope:(id)arg1;
+ (id)allCaptureScopes;
+ (id)getInfoWithAddress:(unsigned long long)arg1;
+ (id)getInfoWithStreamRef:(unsigned long long)arg1;
+ (void)initialize;
+ (void)removeScope:(id)arg1;
+ (void)sendAll:(struct os_unfair_lock_s { unsigned int x1; }*)arg1;
+ (void)updateAll;

@end
