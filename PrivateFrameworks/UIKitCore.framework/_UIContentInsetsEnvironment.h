
@interface _UIContentInsetsEnvironment : NSObject <NSCopying, _UIContentInsetsEnvironment> {
    long long  _insetReference;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _layoutMarginsInsets;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _readableContentInsets;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _safeAreaInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } effectiveInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long insetReference;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } layoutMarginsInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } readableContentInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (readonly) Class superclass;

+ (id)insetEnvironmentForInsetReference:(long long)arg1 safeAreaInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 layoutMarginsInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3 readableContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
+ (id)insetEnvironmentForView:(id)arg1 insetReference:(long long)arg2;
+ (id)insetEnvironmentFromParentEnvironment:(id)arg1 insetReference:(long long)arg2;
+ (id)nullEnvironment;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })effectiveInsets;
- (id)initWithInsetReference:(long long)arg1 safeAreaInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 layoutMarginsInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3 readableContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (long long)insetReference;
- (bool)isEqual:(id)arg1;
- (id)layoutContainerForContainerSize:(struct CGSize { double x1; double x2; })arg1 layoutAxis:(unsigned long long)arg2;
- (id)layoutContainerForInsetReference:(long long)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2 layoutAxis:(unsigned long long)arg3;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })layoutMarginsInsets;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })readableContentInsets;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setInsetReference:(long long)arg1;
- (void)setLayoutMarginsInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setReadableContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
