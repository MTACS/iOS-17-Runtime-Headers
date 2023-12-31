
@interface EDTwoCellAnchor : EDAnchor {
    int  mEditAs;
    struct EDCellAnchorMarker { 
        int columnIndex; 
        float columnAdjustment; 
        int rowIndex; 
        float rowAdjustment; 
    }  mFrom;
    bool  mIsRelative;
    struct EDCellAnchorMarker { 
        int columnIndex; 
        float columnAdjustment; 
        int rowIndex; 
        float rowAdjustment; 
    }  mTo;
}

- (id).cxx_construct;
- (int)editAs;
- (struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })from;
- (id)init;
- (bool)isRelative;
- (void)setEditAs:(int)arg1;
- (void)setFrom:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1;
- (void)setRelative:(bool)arg1;
- (void)setTo:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1;
- (struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })to;

@end
