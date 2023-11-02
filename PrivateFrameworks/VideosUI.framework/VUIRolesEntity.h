
@interface VUIRolesEntity : NSObject {
    NSString * _characterName;
    NSString * _personName;
    NSString * _roleTitle;
    NSString * _type;
}

@property (nonatomic, retain) NSString *characterName;
@property (nonatomic, retain) NSString *personName;
@property (nonatomic, retain) NSString *roleTitle;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)characterName;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)personName;
- (id)roleTitle;
- (void)setCharacterName:(id)arg1;
- (void)setPersonName:(id)arg1;
- (void)setRoleTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
