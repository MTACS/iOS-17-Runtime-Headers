
@interface PXGTitleSubtitleViewConfiguration : NSObject <NSCopying> {
    PXTitleSubtitleLabelSpec * _spec;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)spec;
- (id)subtitle;
- (id)title;

@end
