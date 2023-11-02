
@interface FBKDiffableTableViewCell : UITableViewCell <FBKDiffableCell> {
    NSString * itemIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureForTeam:(id)arg1 disclosesMoreTeams:(bool)arg2;
- (id)itemIdentifier;
- (void)setItemIdentifier:(id)arg1;

@end
