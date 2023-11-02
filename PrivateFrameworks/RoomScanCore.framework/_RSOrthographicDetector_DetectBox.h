
@interface _RSOrthographicDetector_DetectBox : NSObject {
    float  _area;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _box;
    float  _confidence;
    int  _label;
    int  _scale;
}

- (id)description;

@end
