
@interface PXZoomableInlineHeaderViewConfiguration : NSObject <NSCopying> {
    unsigned long long  _style;
    NSString * _subtitle;
    bool  _swapTitleAndSubtitle;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) bool swapTitleAndSubtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 swapTitleAndSubtitle:(bool)arg3 style:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)style;
- (id)subtitle;
- (bool)swapTitleAndSubtitle;
- (id)title;

@end
