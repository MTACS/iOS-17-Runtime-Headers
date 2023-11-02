
@interface PKMetalStrokeRenderCacheBuffer : NSObject {
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
    PKMetalBuffer * _buffer;
    unsigned long long  _numVertices;
    unsigned long long  _offset;
}

- (void).cxx_destruct;
- (id)init;

@end
