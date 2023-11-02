
@interface FBKInformationCell : UITableViewCell <FBKDiffableCell> {
    FBKQuestion * _question;
    NSString * itemIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) FBKQuestion *question;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)itemIdentifier;
- (id)question;
- (void)setItemIdentifier:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
