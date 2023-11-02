
@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService> {
    NSURL * _directoryURL;
    long long  _protocolVersion;
    VCCompanionSyncService * _service;
    NSString * _syncServiceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long protocolVersion;
@property (nonatomic, readonly) VCCompanionSyncService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *syncServiceIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)directoryURL;
- (unsigned long long)hash;
- (id)initWithCompanionSyncService:(id)arg1 device:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)protocolVersion;
- (void)requestFullResync;
- (void)requestSync;
- (id)service;
- (id)syncServiceIdentifier;

@end
