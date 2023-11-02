
@interface CNUILikenessSystemImageBadge : NSObject <CNUILikenessBadge> {
    unsigned long long  _badgeType;
    UIImage * _image;
    NSData * _imageData;
}

@property (nonatomic) unsigned long long badgeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSData *imageData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)imageData;
- (id)initWithSystemImageNamed:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBadgeType:(unsigned long long)arg1;

@end
