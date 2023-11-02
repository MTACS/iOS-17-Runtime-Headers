
@interface GKPlayerActivityRelationshipGame : GKPlayerActivityRelationshipBase {
    NSNumber * _adamId;
    GKPlayerActivityRelationshipIcon * _icon;
}

@property (nonatomic, retain) NSNumber *adamId;
@property (nonatomic, retain) GKPlayerActivityRelationshipIcon *icon;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)adamId;
- (id)description;
- (id)icon;
- (id)initWithDictionary:(id)arg1;
- (void)setAdamId:(id)arg1;
- (void)setIcon:(id)arg1;

@end
