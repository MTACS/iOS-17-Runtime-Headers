
@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
    EDAnchor * mAnchor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBounds;
    id  mClientState;
    EDComment * mComment;
    bool  mIsBoundsSet;
    EDSheet * mSheet;
    NSMutableDictionary * mTableModels;
    EDTextBox * mTextBox;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)anchor;
- (bool)areBoundsSet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)clientState;
- (id)comment;
- (id)description;
- (bool)hasBounds;
- (bool)hasText;
- (void)setAnchor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClientState:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setSheet:(id)arg1;
- (void)setTableModels:(id)arg1;
- (void)setTextBox:(id)arg1;
- (id)sheet;
- (id)tableModels;
- (id)textBox;

@end