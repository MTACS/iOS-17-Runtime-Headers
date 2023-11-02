
@interface UIEditMenuConfiguration : NSObject {
    bool  __containsTextReplacement;
    UIResponder * __firstResponderTarget;
    bool  __ignoresPassthroughInView;
    UIWindow * __overrideSourceWindow;
    <NSCopying> * _identifier;
    long long  _preferredArrowDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sourcePoint;
}

@property (nonatomic) bool _containsTextReplacement;
@property (nonatomic) UIResponder *_firstResponderTarget;
@property (nonatomic) bool _ignoresPassthroughInView;
@property (nonatomic) UIWindow *_overrideSourceWindow;
@property (nonatomic, copy) <NSCopying> *identifier;
@property (nonatomic) long long preferredArrowDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } sourcePoint;

+ (id)configurationWithIdentifier:(id)arg1 sourcePoint:(struct CGPoint { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (bool)_containsTextReplacement;
- (id)_firstResponderTarget;
- (bool)_ignoresPassthroughInView;
- (id)_overrideSourceWindow;
- (id)description;
- (id)identifier;
- (long long)preferredArrowDirection;
- (void)setIdentifier:(id)arg1;
- (void)setPreferredArrowDirection:(long long)arg1;
- (void)setSourcePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_containsTextReplacement:(bool)arg1;
- (void)set_firstResponderTarget:(id)arg1;
- (void)set_ignoresPassthroughInView:(bool)arg1;
- (void)set_overrideSourceWindow:(id)arg1;
- (struct CGPoint { double x1; double x2; })sourcePoint;

@end
