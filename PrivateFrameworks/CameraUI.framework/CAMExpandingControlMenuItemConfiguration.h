
@interface CAMExpandingControlMenuItemConfiguration : NSObject <NSCopying> {
    bool  _hidden;
    bool  _slashesTitle;
    bool  _tintsTitle;
}

@property (nonatomic) bool hidden;
@property (nonatomic) bool slashesTitle;
@property (nonatomic) bool tintsTitle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hidden;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setSlashesTitle:(bool)arg1;
- (void)setTintsTitle:(bool)arg1;
- (bool)slashesTitle;
- (bool)tintsTitle;

@end
