
@interface AXSwitchRecipe : NSObject {
    NSArray * _mappings;
    NSString * _menuIconIdentifier;
    NSString * _name;
    double  _timeout;
    NSString * _unlocalizedName;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSArray *mappings;
@property (nonatomic, copy) NSString *menuIconIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool shouldContinueScanning;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSString *unlocalizedName;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)recipeWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (id)mappings;
- (id)menuIconIdentifier;
- (id)name;
- (void)setMappings:(id)arg1;
- (void)setMenuIconIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUnlocalizedName:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldContinueScanning;
- (double)timeout;
- (id)unlocalizedName;
- (id)uuid;

@end