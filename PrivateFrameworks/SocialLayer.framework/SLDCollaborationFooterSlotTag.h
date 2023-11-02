
@interface SLDCollaborationFooterSlotTag : SLDSlotTag <NSCopying> {
    double  _maxWidth;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) double maxWidth;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)tagForTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)maxWidth;
- (id)subtitle;
- (id)title;

@end
