
@interface TSTTableRepProcessChangesActions : NSObject {
    bool  _hideChromeContextMenuButton;
    bool  _hideStepperHUD;
    bool  _invalidateAllChrome;
    bool  _invalidateColumnChrome;
    bool  _invalidateKnobs;
    bool  _invalidateRowChrome;
    bool  _invalidateSelection;
    bool  _invalidateTableName;
    bool  _setNeedsDisplay;
    bool  _syncReferenceHighlightState;
    bool  _updateEditorRemainders;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  dirtyCellRange;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  dirtyStrokeRange;
}

@property (nonatomic) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dirtyCellRange;
@property (nonatomic) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dirtyStrokeRange;
@property (nonatomic) bool hideChromeContextMenuButton;
@property (nonatomic) bool hideStepperHUD;
@property (nonatomic) bool invalidateAllChrome;
@property (nonatomic) bool invalidateColumnChrome;
@property (nonatomic) bool invalidateKnobs;
@property (nonatomic) bool invalidateRowChrome;
@property (nonatomic) bool invalidateSelection;
@property (nonatomic) bool invalidateTableName;
@property (nonatomic) bool setNeedsDisplay;
@property (nonatomic) bool syncReferenceHighlightState;
@property (nonatomic) bool updateEditorRemainders;

- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dirtyCellRange;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dirtyStrokeRange;
- (bool)hideChromeContextMenuButton;
- (bool)hideStepperHUD;
- (bool)invalidateAllChrome;
- (bool)invalidateColumnChrome;
- (bool)invalidateKnobs;
- (bool)invalidateRowChrome;
- (bool)invalidateSelection;
- (bool)invalidateTableName;
- (void)setDirtyCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setDirtyStrokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setHideChromeContextMenuButton:(bool)arg1;
- (void)setHideStepperHUD:(bool)arg1;
- (void)setInvalidateAllChrome:(bool)arg1;
- (void)setInvalidateColumnChrome:(bool)arg1;
- (void)setInvalidateKnobs:(bool)arg1;
- (void)setInvalidateRowChrome:(bool)arg1;
- (void)setInvalidateSelection:(bool)arg1;
- (void)setInvalidateTableName:(bool)arg1;
- (bool)setNeedsDisplay;
- (void)setSetNeedsDisplay:(bool)arg1;
- (void)setSyncReferenceHighlightState:(bool)arg1;
- (void)setUpdateEditorRemainders:(bool)arg1;
- (bool)syncReferenceHighlightState;
- (bool)updateEditorRemainders;

@end
