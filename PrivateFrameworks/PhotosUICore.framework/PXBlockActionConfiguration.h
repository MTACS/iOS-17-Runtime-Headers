
@interface PXBlockActionConfiguration : NSObject <NSCopying> {
    id /* block */  _actionBlock;
    NSString * _actionName;
    id /* block */  _canPerformBlock;
    bool  _destructive;
    UIImage * _image;
    id /* block */  _menuElementConstructor;
    bool  _selected;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, copy) NSString *actionName;
@property (nonatomic, copy) id /* block */ canPerformBlock;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) id /* block */ menuElementConstructor;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)actionName;
- (id /* block */)canPerformBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)image;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)isDestructive;
- (bool)isSelected;
- (id /* block */)menuElementConstructor;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setActionName:(id)arg1;
- (void)setCanPerformBlock:(id /* block */)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMenuElementConstructor:(id /* block */)arg1;
- (void)setSelected:(bool)arg1;

@end
