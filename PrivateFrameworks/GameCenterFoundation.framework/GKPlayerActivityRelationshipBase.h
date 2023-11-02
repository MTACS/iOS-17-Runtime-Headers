
@interface GKPlayerActivityRelationshipBase : GKInternalRepresentation {
    NSString * _identifier;
    NSString * _image;
    NSString * _name;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *image;
@property (nonatomic, retain) NSString *name;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)image;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;

@end
