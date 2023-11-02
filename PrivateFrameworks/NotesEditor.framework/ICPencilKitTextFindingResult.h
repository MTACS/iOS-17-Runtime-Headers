
@interface ICPencilKitTextFindingResult : ICTextFindingResult {
    struct CGSize { 
        double width; 
        double height; 
    }  _drawingSize;
    unsigned long long  _order;
    PKSearchQueryItem * _searchQueryItem;
}

@property (nonatomic) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic) unsigned long long order;
@property (nonatomic, retain) PKSearchQueryItem *searchQueryItem;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (double)cornerRadius;
- (struct CGSize { double x1; double x2; })drawingSize;
- (id)framesForHighlightInTextView:(id)arg1;
- (unsigned long long)order;
- (id)searchQueryItem;
- (void)setDrawingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setSearchQueryItem:(id)arg1;

@end
