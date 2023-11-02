
@interface PKPGSVSectionHeaderLayoutState : NSObject {
    PKPGSVSectionHeaderContext * _context;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerContainerRect;
    double  _headerOpacity;
    NSArray * _subheaderLayoutStates;
}

- (void).cxx_destruct;
- (id)init;

@end
