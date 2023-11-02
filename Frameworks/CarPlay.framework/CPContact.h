
@interface CPContact : NSObject <NSSecureCoding> {
    CPTemplate * _associatedTemplate;
    CPContactEntity * _contactEntity;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) CPTemplate *associatedTemplate;
@property (nonatomic, retain) CPContactEntity *contactEntity;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *informativeText;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *subtitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_associateControlsToTemplate:(id)arg1;
- (id)actions;
- (id)associatedTemplate;
- (id)contactEntity;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)informativeText;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 image:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setActions:(id)arg1;
- (void)setAssociatedTemplate:(id)arg1;
- (void)setContactEntity:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
