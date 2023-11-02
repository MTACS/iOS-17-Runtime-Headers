
@interface PKStrokeGroupItem : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _contentType;
    CHStrokeGroupQueryItem * _strokeGroupItem;
    NSArray * _strokes;
}

- (void).cxx_destruct;

@end
