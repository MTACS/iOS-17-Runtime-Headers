
@interface GCVirtualControllerElementConfiguration : NSObject {
    bool  _actsAsTouchpad;
    bool  _hidden;
    UIBezierPath * _path;
}

@property (nonatomic) bool actsAsTouchpad;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIBezierPath *path;

- (void).cxx_destruct;
- (bool)actsAsTouchpad;
- (bool)isHidden;
- (id)path;
- (void)setActsAsTouchpad:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setPath:(id)arg1;

@end
