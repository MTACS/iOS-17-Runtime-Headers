
@interface UIWebLayer : CALayer {
    bool  _layoutsSuspended;
}

- (void)setLayoutsSuspended:(bool)arg1;
- (void)setNeedsLayout;

@end
