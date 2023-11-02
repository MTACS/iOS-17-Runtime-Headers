
@interface PRPosterAppearance : NSObject {
    UIFont * _font;
    PRPosterColor * _labelColor;
    unsigned long long  _preferredTitleAlignment;
    unsigned long long  _preferredTitleLayout;
}

@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) PRPosterColor *labelColor;
@property (nonatomic, readonly) unsigned long long preferredTitleAlignment;
@property (nonatomic, readonly) unsigned long long preferredTitleLayout;

- (void).cxx_destruct;
- (id)font;
- (id)initWithFont:(id)arg1 labelColor:(id)arg2 preferredTitleAlignment:(unsigned long long)arg3 preferredTitleLayout:(unsigned long long)arg4;
- (id)labelColor;
- (unsigned long long)preferredTitleAlignment;
- (unsigned long long)preferredTitleLayout;

@end
