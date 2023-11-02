
@interface PXToastConfiguration : NSObject <NSCopying> {
    double  _autoDismissalDelay;
    double  _bottomMargin;
    bool  _canSwipeToDismiss;
    UIView * _contentView;
    NSString * _iconSystemImageName;
    NSString * _message;
    UIView * _sourceView;
}

@property (nonatomic) double autoDismissalDelay;
@property (nonatomic) double bottomMargin;
@property (nonatomic) bool canSwipeToDismiss;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, copy) NSString *iconSystemImageName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) UIView *sourceView;

- (void).cxx_destruct;
- (double)autoDismissalDelay;
- (double)bottomMargin;
- (bool)canSwipeToDismiss;
- (id)contentView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)iconSystemImageName;
- (id)init;
- (id)message;
- (void)setAutoDismissalDelay:(double)arg1;
- (void)setBottomMargin:(double)arg1;
- (void)setCanSwipeToDismiss:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setIconSystemImageName:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
