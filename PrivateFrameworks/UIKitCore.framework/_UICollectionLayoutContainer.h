
@interface _UICollectionLayoutContainer : NSObject <NSCollectionLayoutContainer> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <_UIContentInsetsEnvironment> * _insetsEnvironment;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } effectiveContentInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } effectiveContentSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_UIContentInsetsEnvironment> *insetsEnvironment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })effectiveContentInsets;
- (struct CGSize { double x1; double x2; })effectiveContentSize;
- (bool)isEqual:(id)arg1;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInsetsEnvironment:(id)arg1;

@end
