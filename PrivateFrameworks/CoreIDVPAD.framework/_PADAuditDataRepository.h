
@interface _PADAuditDataRepository : NSObject <PADAuditDataRepository> {
    _TtC10CoreIDVPAD30PADInternalAuditDataRepository * _auditDataRepository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)storeClassifierResult:(id)arg1 imageData:(id)arg2 signature:(id)arg3 flags:(id)arg4;
- (void)storeFACPoseBuffer:(struct __CVBuffer { }*)arg1 identifier:(id)arg2 values:(id)arg3;
- (void)storePRDBuffer:(struct __CVBuffer { }*)arg1 name:(id)arg2;
- (void)storeTAValues:(id)arg1;
- (void)storeUnencryptedVideoFrom:(id)arg1;

@end
