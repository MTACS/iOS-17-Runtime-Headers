
@interface SFKBScreenTraits : UIKBScreenTraits {
    bool  _sf_isKeyboardMinorEdgeWidth;
}

@property (nonatomic) bool sf_isKeyboardMinorEdgeWidth;

+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;

- (bool)isKeyboardMinorEdgeWidth;
- (void)setSf_isKeyboardMinorEdgeWidth:(bool)arg1;
- (bool)sf_isKeyboardMinorEdgeWidth;

@end
