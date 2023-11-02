
@interface VSCredentialEntryButton : NSObject {
    VSCredentialEntryViewModel * _owningViewModel;
    NSString * _title;
}

@property (nonatomic) VSCredentialEntryViewModel *owningViewModel;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)owningViewModel;
- (void)setOwningViewModel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
