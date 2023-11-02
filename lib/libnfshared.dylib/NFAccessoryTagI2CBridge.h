
@interface NFAccessoryTagI2CBridge : NFAccessoryTag {
    bool  _selected;
    NSData * _tagUUID;
    int  _transactionCounter;
    long long  _type;
}

@property (nonatomic) bool selected;
@property (nonatomic, retain) NSData *tagUUID;
@property (nonatomic) int transactionCounter;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_bridgeType0CreateAccessoryHeaderWithBuffer:(id)arg1 pageLength:(unsigned long long)arg2 isLastPage:(bool)arg3;
- (id)_bridgeType0ReadMultipleSRAMPagesWithBuffer:(id)arg1;
- (id)_bridgeType0WriteOneSRAMPage:(id)arg1 fragmentationSupport:(bool)arg2 isLastPage:(bool)arg3;
- (id)_bridgeType0WritePollForCompletionWithTimeout:(double)arg1;
- (bool)_bridgeType0WritePollForSystemReadyWithTimeout:(double)arg1 beforeWrite:(bool)arg2 outError:(id*)arg3;
- (id)_readFromBridgeType0:(id*)arg1 fragmentationSupport:(bool)arg2;
- (id)_selectTagType0;
- (id)_type0GetSystemInfo:(id*)arg1;
- (id)_type0ReadConfigRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 data:(id*)arg2;
- (id)_type0ReadConfigReg:(unsigned char)arg1 data:(id*)arg2;
- (id)_type0ReadSRAM:(unsigned char)arg1 numOfBlocks:(unsigned char)arg2 data:(id*)arg3;
- (id)_type0WriteConfigReg:(unsigned char)arg1 data:(id)arg2;
- (id)_type0WriteSRAM:(unsigned char)arg1 data:(id)arg2;
- (id)_writeToBridgeType0:(id)arg1 fragmentationSupport:(bool)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithType:(long long)arg1 delegate:(id)arg2;
- (id)readFromBridge:(id)arg1 fragmentationSupport:(bool)arg2 response:(id*)arg3;
- (id)selectTag;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)setTagUUID:(id)arg1;
- (void)setTransactionCounter:(int)arg1;
- (id)tagUUID;
- (int)transactionCounter;
- (long long)type;
- (id)writeToBridge:(id)arg1 fragmentationSupport:(bool)arg2 response:(id*)arg3;

@end
