
@interface MFPopupButtonItem : NSObject {
    NSString * _popupTitle;
    long long  _style;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSString *popupTitle;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (id)itemWithTitle:(id)arg1;
+ (id)itemWithTitle:(id)arg1 popupTitle:(id)arg2 subtitle:(id)arg3 style:(long long)arg4;
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2;

- (void).cxx_destruct;
- (id)copy;
- (bool)isEqual:(id)arg1;
- (id)popupTitle;
- (void)setPopupTitle:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)subtitle;
- (id)title;

@end
