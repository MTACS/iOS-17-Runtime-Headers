
@interface GQDBGPlaceholder : GQDDrawable {
    bool  mIsVisible;
    GQDSStyle * mStyle;
}

- (void)dealloc;
- (bool)isVisible;
- (id)placeholderStyle;

@end
