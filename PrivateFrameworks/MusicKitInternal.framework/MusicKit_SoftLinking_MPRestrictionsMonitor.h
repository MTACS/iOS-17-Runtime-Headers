
@interface MusicKit_SoftLinking_MPRestrictionsMonitor : NSObject {
    MPRestrictionsMonitor * _underlyingRestrictionsMonitor;
}

@property (nonatomic, readonly) bool allowsDeletion;
@property (nonatomic, readonly) bool allowsExplicitContent;

+ (id)allowsExplicitContentDidChangeNotification;
+ (id)sharedRestrictionsMonitor;

- (void).cxx_destruct;
- (void)_handleAllowsExplicitContentDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingRestrictionsMonitor:(id)arg1;
- (bool)allowsDeletion;
- (bool)allowsExplicitContent;
- (void)dealloc;

@end
