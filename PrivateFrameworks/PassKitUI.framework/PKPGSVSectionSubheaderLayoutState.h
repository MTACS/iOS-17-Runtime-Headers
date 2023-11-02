
@interface PKPGSVSectionSubheaderLayoutState : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerRect;
    PKPGSVSectionSubheaderContext * _context;
}

- (void).cxx_destruct;
- (id)init;

@end
