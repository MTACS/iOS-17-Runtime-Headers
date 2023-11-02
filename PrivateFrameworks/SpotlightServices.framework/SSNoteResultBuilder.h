
@interface SSNoteResultBuilder : SSResultBuilder {
    NSString * _account;
    NSString * _folder;
    NSString * _formattedBody;
    bool  _isLocked;
    bool  _isShared;
    NSDate * _modificationDate;
    NSString * _title;
}

@property (nonatomic, retain) NSString *account;
@property (nonatomic, retain) NSString *folder;
@property (nonatomic, retain) NSString *formattedBody;
@property (nonatomic) bool isLocked;
@property (nonatomic) bool isShared;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSString *title;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)account;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildTitle;
- (id)folder;
- (id)formattedBody;
- (id)initWithResult:(id)arg1;
- (bool)isLocked;
- (bool)isShared;
- (id)modificationDate;
- (void)setAccount:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setFormattedBody:(id)arg1;
- (void)setIsLocked:(bool)arg1;
- (void)setIsShared:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
