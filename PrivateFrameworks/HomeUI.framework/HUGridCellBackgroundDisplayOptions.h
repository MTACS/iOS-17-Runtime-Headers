
@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    unsigned long long  _contentColorStyle;
    NSString * _contentSizeCategory;
    unsigned long long  _displayStyle;
}

@property (nonatomic) unsigned long long contentColorStyle;
@property (nonatomic) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic, readonly) double gutter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultOptions;

- (unsigned long long)contentColorStyle;
- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)displayStyle;
- (double)gutter;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;

@end
