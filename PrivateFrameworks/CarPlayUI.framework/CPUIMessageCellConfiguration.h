
@interface CPUIMessageCellConfiguration : NSObject <CPUIMessageCellConfigurationProtocol> {
    NSString * _detailText;
    bool  _enabled;
    UIImage * _image;
    bool  _showsMute;
    bool  _showsPin;
    bool  _showsStar;
    NSString * _text;
    UIImage * _trailingImage;
    NSString * _trailingText;
    bool  _unread;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool showsMute;
@property (nonatomic) bool showsPin;
@property (nonatomic) bool showsStar;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIImage *trailingImage;
@property (nonatomic, copy) NSString *trailingText;
@property (getter=isUnread, nonatomic) bool unread;

+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 unread:(bool)arg4 showsPin:(bool)arg5 showsStar:(bool)arg6 showsMute:(bool)arg7 trailingText:(id)arg8 trailingImage:(id)arg9;
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 unread:(bool)arg4 showsPin:(bool)arg5 showsStar:(bool)arg6 showsMute:(bool)arg7 trailingText:(id)arg8 trailingImage:(id)arg9 enabled:(bool)arg10;

- (void).cxx_destruct;
- (id)detailText;
- (bool)enabled;
- (id)image;
- (bool)isUnread;
- (void)setDetailText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setShowsMute:(bool)arg1;
- (void)setShowsPin:(bool)arg1;
- (void)setShowsStar:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingText:(id)arg1;
- (void)setUnread:(bool)arg1;
- (bool)showsMute;
- (bool)showsPin;
- (bool)showsStar;
- (id)text;
- (id)trailingImage;
- (id)trailingText;

@end
