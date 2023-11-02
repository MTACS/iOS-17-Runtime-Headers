
@interface GKGameHighlightInternal : GKInternalRepresentation {
    NSNumber * _adamID;
    ASCArtwork * _artwork;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) NSNumber *adamID;
@property (nonatomic, retain) ASCArtwork *artwork;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)adamID;
- (id)artwork;
- (void)setAdamID:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
