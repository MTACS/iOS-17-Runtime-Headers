
@interface PKSharePreviewRowItem : NSObject <PKIdentifiable> {
    bool  _displayChevron;
    unsigned long long  _displayToggleState;
    UIImage * _icon;
    NSString * _identifier;
    bool  _isShowingSensitiveContent;
    NSString * _subtitle;
    NSString * _title;
    UIColor * _titleColor;
    bool  _toggleEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayChevron;
@property (nonatomic) unsigned long long displayToggleState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isShowingSensitiveContent;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic) bool toggleEnabled;

- (void).cxx_destruct;
- (bool)displayChevron;
- (unsigned long long)displayToggleState;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharePreviewRowItem:(id)arg1;
- (bool)isShowingSensitiveContent;
- (void)setDisplayChevron:(bool)arg1;
- (void)setDisplayToggleState:(unsigned long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsShowingSensitiveContent:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setToggleEnabled:(bool)arg1;
- (id)subtitle;
- (id)title;
- (id)titleColor;
- (bool)toggleEnabled;

@end
