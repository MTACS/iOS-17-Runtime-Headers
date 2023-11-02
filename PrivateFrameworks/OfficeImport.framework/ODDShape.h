
@interface ODDShape : ODDLayoutObject {
    NSMutableArray * mAdjustments;
    int  mPresetType;
    int  mType;
}

- (void).cxx_destruct;
- (void)addAdjustment:(id)arg1;
- (id)adjustments;
- (id)description;
- (id)init;
- (int)presetType;
- (void)setPresetType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
