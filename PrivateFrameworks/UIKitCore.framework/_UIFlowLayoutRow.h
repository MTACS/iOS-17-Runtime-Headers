
@interface _UIFlowLayoutRow : NSObject {
    double  _availableSpace;
    bool  _complete;
    bool  _fixedItemSize;
    int  _horizontalAlignement;
    long long  _index;
    bool  _isValid;
    NSMutableArray * _items;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rowFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _rowSize;
    _UIFlowLayoutSection * _section;
    int  _verticalAlignement;
}

- (void).cxx_destruct;
- (id)init;

@end
