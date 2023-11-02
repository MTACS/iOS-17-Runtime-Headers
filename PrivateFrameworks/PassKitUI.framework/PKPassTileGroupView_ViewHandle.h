
@interface PKPassTileGroupView_ViewHandle : NSObject {
    bool  _initialLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    PKPassTileView * _view;
}

- (void).cxx_destruct;
- (id)init;

@end
