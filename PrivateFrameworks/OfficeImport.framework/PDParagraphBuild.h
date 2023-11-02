
@interface PDParagraphBuild : PDBuild {
    double  mAutoAdvanceTime;
    int  mBuildLevel;
    bool  mIsReversedParagraphOrder;
    NSMutableArray * mTimeNodeDataList;
    int  mType;
}

- (void).cxx_destruct;
- (id)addTimeNodeData;
- (double)autoAdvanceTime;
- (int)buildLevel;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)arg1;
- (void)setBuildLevel:(int)arg1;
- (void)setIsReversedParagraphOrder:(bool)arg1;
- (void)setType:(int)arg1;
- (id)timeNodeDataAtIndex:(unsigned long long)arg1;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;
- (int)type;

@end
