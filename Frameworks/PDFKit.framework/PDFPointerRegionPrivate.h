
@interface PDFPointerRegionPrivate : NSObject {
    NSString * identifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rect;
}

- (void).cxx_destruct;

@end
