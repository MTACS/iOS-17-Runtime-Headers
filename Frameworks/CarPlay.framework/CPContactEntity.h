
@interface CPContactEntity : CPEntity <CPContactProviding, NSSecureCoding> {
    NSArray * _actionButtons;
    CPImageSet * _imageSet;
    NSString * _informativeText;
    NSString * _name;
    NSString * _subtitle;
}

@property (nonatomic, copy) NSArray *actionButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPImageSet *imageSet;
@property (nonatomic, copy) NSString *informativeText;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionButtons;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageSet;
- (id)informativeText;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 imageSet:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)objectForIdentifier:(id)arg1;
- (void)setActionButtons:(id)arg1;
- (void)setImageSet:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
