
@interface SearchUIColorRequest : NSObject {
    TLKAppearance * _appearance;
    SFColor * _sfColor;
}

@property (nonatomic, retain) TLKAppearance *appearance;
@property (nonatomic, retain) SFColor *sfColor;

- (void).cxx_destruct;
- (id)appearance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToColorRequest:(id)arg1;
- (void)setAppearance:(id)arg1;
- (void)setSfColor:(id)arg1;
- (id)sfColor;

@end
