
@interface PKMultiKeyValueCellKeyValueSource : NSObject <NSCopying, PKIdentifiable> {
    bool  _bold;
    NSString * _subtitle;
    UIColor * _subtitleTextColor;
    NSString * _title;
}

@property (getter=isBold, nonatomic) bool bold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, retain) UIColor *subtitleTextColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (bool)isBold;
- (bool)isEqual:(id)arg1;
- (void)setBold:(bool)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (id)subtitle;
- (id)subtitleTextColor;
- (id)title;

@end
