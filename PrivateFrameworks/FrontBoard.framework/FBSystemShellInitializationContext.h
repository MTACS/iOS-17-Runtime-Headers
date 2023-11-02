
@interface FBSystemShellInitializationContext : NSObject <NSCopying> {
    bool  _bootedDark;
    FBSystemShellInitializationOptions * _options;
}

@property (getter=wasBootedDark, nonatomic, readonly) bool bootedDark;
@property (nonatomic, readonly) unsigned long long lastExitReason;
@property (nonatomic, readonly) FBSystemShellInitializationOptions *options;

- (void).cxx_destruct;
- (id)_initWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)lastExitReason;
- (id)options;
- (bool)wasBootedDark;

@end
