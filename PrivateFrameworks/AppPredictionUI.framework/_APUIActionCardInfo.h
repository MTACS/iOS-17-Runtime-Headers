
@interface _APUIActionCardInfo : NSObject {
    SFActionItem * _actionItem;
    SFPunchout * _actionPunchout;
    NSString * _appTitle;
    NSString * _bundleId;
    NSString * _footnote;
    SFImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) SFActionItem *actionItem;
@property (nonatomic, retain) SFPunchout *actionPunchout;
@property (nonatomic, retain) NSString *appTitle;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *footnote;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)actionItem;
- (id)actionPunchout;
- (id)appTitle;
- (id)bundleId;
- (id)footnote;
- (id)image;
- (void)setActionItem:(id)arg1;
- (void)setActionPunchout:(id)arg1;
- (void)setAppTitle:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
