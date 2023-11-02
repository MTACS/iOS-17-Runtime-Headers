
@interface PKPGSVSectionHeaderContext : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedHeaderViewSize;
    double  _containerWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerMargins;
    UIView<PKPGSVSectionHeaderView> * _headerView;
    NSArray * _subheaderContexts;
}

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
