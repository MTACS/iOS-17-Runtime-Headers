
@interface wspQueryIn : NSObject {
    cNodeRestriction * _primaryCnodeRestriction;
    cNodeRestriction * _secondaryCnodeRestriction;
    wspContext * _wctx;
    struct { 
        unsigned int msgid; 
        unsigned int status; 
        unsigned int checksum; 
        unsigned int reserved2; 
    }  msghdr;
}

@property (retain) cNodeRestriction *primaryCnodeRestriction;
@property (retain) cNodeRestriction *secondaryCnodeRestriction;
@property (retain) wspContext *wctx;

- (void).cxx_destruct;
- (int)encodePrimaryQuery:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)encodeSecondaryQuery:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithCtx:(id)arg1;
- (id)makePrimaryCnodeRestriction;
- (id)makeSecondaryCnodeRestriction;
- (id)primaryCnodeRestriction;
- (id)secondaryCnodeRestriction;
- (void)setPrimaryCnodeRestriction:(id)arg1;
- (void)setSecondaryCnodeRestriction:(id)arg1;
- (void)setWctx:(id)arg1;
- (id)wctx;

@end
