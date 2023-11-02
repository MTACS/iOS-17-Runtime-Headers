
@interface HKSourceDataModel : NSObject <NSCopying> {
    UIImage * _icon;
    bool  _installed;
    NSDictionary * _purposeStrings;
    HKSource * _source;
}

@property (retain) UIImage *icon;
@property bool installed;
@property (copy) NSDictionary *purposeStrings;
@property (nonatomic, readonly, copy) HKSource *source;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithSource:(id)arg1;
- (bool)installed;
- (bool)isEqual:(id)arg1;
- (id)purposeStrings;
- (void)setIcon:(id)arg1;
- (void)setInstalled:(bool)arg1;
- (void)setPurposeStrings:(id)arg1;
- (id)source;

@end
