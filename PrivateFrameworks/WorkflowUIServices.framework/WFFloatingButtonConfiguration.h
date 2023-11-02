
@interface WFFloatingButtonConfiguration : WFFloatingViewConfiguration {
    bool  _boldTitle;
    double  _titleFontSize;
}

@property (nonatomic) bool boldTitle;
@property (nonatomic) double titleFontSize;

- (bool)boldTitle;
- (id)init;
- (void)setBoldTitle:(bool)arg1;
- (void)setTitleFontSize:(double)arg1;
- (double)titleFontSize;

@end
