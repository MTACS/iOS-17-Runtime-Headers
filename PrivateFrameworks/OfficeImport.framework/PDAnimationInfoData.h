
@interface PDAnimationInfoData : NSObject {
    PDBuild * mBuild;
    OADDrawable * mDrawable;
    unsigned int  mOrder;
    PDSequentialTimeNode * mSequentialTimeNodeData;
}

- (void).cxx_destruct;
- (id)build;
- (id)data;
- (id)drawable;
- (id)initWithTarget:(id)arg1 presetClass:(int)arg2 presetId:(int)arg3 triggerType:(int)arg4 iterateType:(int)arg5 delay:(double)arg6 direction:(double)arg7 order:(unsigned int)arg8 groupId:(id)arg9 build:(id)arg10;
- (unsigned int)order;

@end
