
@interface _HKRemoteDisplayTypeConfiguration : NSObject {
    long long  _initialTimeScope;
    HKDisplayType * _remoteDisplayType;
}

@property (nonatomic, readonly) long long initialTimeScope;
@property (nonatomic, readonly) HKDisplayType *remoteDisplayType;

- (void).cxx_destruct;
- (id)initWithInitialTimeScope:(long long)arg1 remoteDisplayType:(id)arg2;
- (long long)initialTimeScope;
- (id)remoteDisplayType;

@end
