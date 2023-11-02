
@interface WFVariablePillLayoutMetrics : NSObject {
    void cornerRadius;
    void iconDisplaySize;
    void iconSize;
    void leadingPadding;
    void spacing;
    void textFont;
    void textSize;
    void trailingPadding;
}

@property (nonatomic, readonly) double totalWidth;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 icon:(id)arg2 font:(id)arg3 height:(double)arg4;
- (double)totalWidth;

@end
