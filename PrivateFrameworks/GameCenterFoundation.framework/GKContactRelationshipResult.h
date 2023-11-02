
@interface GKContactRelationshipResult : GKInternalRepresentation {
    NSString * _handle;
    GKPlayerInternal * _relatedPlayer;
    int  _relationship;
}

@property (nonatomic, copy) NSString *handle;
@property (nonatomic, retain) GKPlayerInternal *relatedPlayer;
@property (nonatomic) int relationship;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)handle;
- (id)relatedPlayer;
- (int)relationship;
- (void)setHandle:(id)arg1;
- (void)setRelatedPlayer:(id)arg1;
- (void)setRelationship:(int)arg1;

@end
