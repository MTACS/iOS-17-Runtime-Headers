
@interface _UIFlowLayoutItem : NSObject {
    struct { 
        unsigned int sizeEstimated : 1; 
        unsigned int positionEstimated : 1; 
        unsigned int sizeHasBeenSet : 1; 
    }  _itemFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _itemFrame;
    _UIFlowLayoutRow * _rowObject;
    _UIFlowLayoutSection * _section;
}

- (void).cxx_destruct;
- (id)copy;

@end
