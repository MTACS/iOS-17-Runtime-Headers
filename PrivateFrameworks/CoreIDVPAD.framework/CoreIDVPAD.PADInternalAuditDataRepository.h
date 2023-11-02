
@interface CoreIDVPAD.PADInternalAuditDataRepository : NSObject {
    void dataRecorder;
}

- (void).cxx_destruct;
- (id)init;
- (void)storeClassifierResult:(id)arg1 imageData:(id)arg2;
- (void)storeFACPoseBuffer:(struct __CVBuffer { }*)arg1 identifier:(id)arg2 values:(id)arg3;
- (void)storePRDBuffer:(struct __CVBuffer { }*)arg1 name:(id)arg2;
- (void)storeTAValues:(id)arg1;
- (void)storeUnencryptedVideoFrom:(id)arg1;

@end
