
@interface LPIconBadgeStyle : LPImageViewStyle <NSCopying> {
    double  _offset;
}

@property (nonatomic) double offset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)offset;
- (void)setOffset:(double)arg1;

@end
