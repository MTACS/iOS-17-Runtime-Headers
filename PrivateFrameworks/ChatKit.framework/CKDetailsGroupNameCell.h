
@interface CKDetailsGroupNameCell : CKDetailsCell <CKDetailsCell> {
    CKDetailsAddGroupNameView * _groupNameView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDetailsAddGroupNameView *groupNameView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)_ckSymbolImageNamed:(id)arg1 preferredContentSizeCategory:(id)arg2 preferredFontTextStyle:(id)arg3;
- (void)dealloc;
- (id)groupNameView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setGroupNameView:(id)arg1;

@end
