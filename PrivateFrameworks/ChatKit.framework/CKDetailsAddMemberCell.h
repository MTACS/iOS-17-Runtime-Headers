
@interface CKDetailsAddMemberCell : CKDetailsCell {
    UILabel * _addLabel;
}

@property (nonatomic, retain) UILabel *addLabel;

+ (Class)cellClass;
+ (double)preferredHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)addLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAddLabel:(id)arg1;

@end
