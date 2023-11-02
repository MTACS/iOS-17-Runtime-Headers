
@interface SBHFolderIconVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _gridCellSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _gridCellSpacing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } gridCellSize;
@property (nonatomic) struct CGSize { double x1; double x2; } gridCellSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (struct CGSize { double x1; double x2; })gridCellSize;
- (struct CGSize { double x1; double x2; })gridCellSpacing;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setGridCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGridCellSpacing:(struct CGSize { double x1; double x2; })arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
