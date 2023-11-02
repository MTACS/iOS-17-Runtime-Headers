
@interface ODIHNodeInfo : NSObject {
    bool  mConnectToVerticalSide;
    int  mExtraRowsBetweenParentAndSelf;
    int  mRow;
    int  mTreeDepth;
    float  mXOffsetRelativeToParent;
    struct ODIHRange { 
        float mMid; 
        float mLength; 
    }  mXRange;
    void * mXRanges;
}

- (void)addToXOffsetRelativeToParent:(float)arg1;
- (bool)connectToVerticalSide;
- (void)dealloc;
- (int)extraRowsBetweenParentAndSelf;
- (id)init;
- (int)row;
- (void)setConnectToVerticalSide:(bool)arg1;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg1;
- (void)setRow:(int)arg1;
- (void)setTreeDepth:(int)arg1;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (void)setXRange:(struct ODIHRange { float x1; float x2; })arg1;
- (int)treeDepth;
- (float)xOffsetRelativeToParent;
- (struct ODIHRange { float x1; float x2; })xRange;
- (void*)xRanges;

@end
