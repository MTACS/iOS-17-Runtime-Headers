
@interface ICPaperKitTextFindingResult : ICTextFindingResult {
    unsigned long long  _order;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _searchResultRect;
}

@property (nonatomic) unsigned long long order;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } searchResultRect;

- (long long)compare:(id)arg1;
- (id)framesForHighlightInTextView:(id)arg1;
- (unsigned long long)order;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchResultRect;
- (void)setOrder:(unsigned long long)arg1;
- (void)setSearchResultRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
