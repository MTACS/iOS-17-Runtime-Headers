
@interface CNCardGameCenterGroupItem : CNCardGroupItem {
    GKContactRelationshipResult * _relationshipResult;
}

@property (nonatomic, retain) GKContactRelationshipResult *relationshipResult;

- (void).cxx_destruct;
- (id)initWithRelationshipResult:(id)arg1;
- (id)relationshipResult;
- (void)setRelationshipResult:(id)arg1;

@end
