
@interface PXAnimationWriteState : NSObject {
    unsigned long long  mCommonTimeNodeDataId;
    TCXmlPrefixStreamWriter * mFile;
    bool  mHasMainSeqTimeNodeId;
    unsigned long long  mMainSeqTimeNodeId;
    OCXWriteState * mWriteState;
}

@property (nonatomic, retain) TCXmlPrefixStreamWriter *file;
@property (nonatomic, retain) OCXWriteState *writeState;

- (void).cxx_destruct;
- (id)file;
- (bool)hasMainSeqTimeNodeId;
- (id)initWithWriteState:(id)arg1 file:(id)arg2;
- (unsigned long long)mainSeqTimeNodeId;
- (unsigned long long)newCommonTimeNodeDataId;
- (void)setFile:(id)arg1;
- (void)setMainSeqTimeNodeId:(unsigned long long)arg1;
- (void)setWriteState:(id)arg1;
- (id)writeState;

@end
