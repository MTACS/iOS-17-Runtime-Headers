
@protocol APPCPromotableBaseContext

@required

- (NSArray *)adjacent;
- (<APPCPromotableContentDepiction> *)current;
- (NSUUID *)identifier;
- (struct CGSize { double x1; double x2; })maxSize;
- (NSArray *)next;
- (NSString *)requestedAd;

@end
