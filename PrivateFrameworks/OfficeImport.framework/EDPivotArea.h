
@interface EDPivotArea : NSObject {
    bool  mGrandCol;
    bool  mGrandRow;
    EDReference * mOffset;
    bool  mOutline;
    EDCollection * mReferences;
    int  mType;
}

+ (id)pivotArea;

- (void).cxx_destruct;
- (id)description;
- (bool)grandCol;
- (bool)grandRow;
- (id)init;
- (id)offset;
- (bool)outline;
- (id)references;
- (void)setGrandCol:(bool)arg1;
- (void)setGrandRow:(bool)arg1;
- (void)setOffset:(id)arg1;
- (void)setOutline:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
