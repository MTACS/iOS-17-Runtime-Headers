
@interface EMChartsheetMapper : EMSheetMapper {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBox;
    EDChartSheet * mChartSheet;
}

- (void).cxx_destruct;
- (id)initWithChartSheet:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (int)preprocessHeightWithState:(id)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (int)width;

@end
