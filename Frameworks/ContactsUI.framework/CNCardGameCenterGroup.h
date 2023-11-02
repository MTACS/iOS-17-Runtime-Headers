
@interface CNCardGameCenterGroup : CNCardGroup {
    NSArray * _relationshipResults;
}

@property (nonatomic, retain) NSArray *relationshipResults;

+ (id)actionForRelationshipResults:(id)arg1 forContact:(id)arg2;
+ (bool)relationshipResultsContainsFriend:(id)arg1;
+ (bool)shouldShowAddFriendActionForRelationshipResults:(id)arg1;

- (void).cxx_destruct;
- (id)displayItems;
- (id)initWithContact:(id)arg1 relationshipResults:(id)arg2;
- (id)relationshipResults;
- (void)setRelationshipResults:(id)arg1;

@end
