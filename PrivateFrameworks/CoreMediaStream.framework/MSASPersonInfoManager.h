
@interface MSASPersonInfoManager : NSObject {
    NSString * _pathForPersonInfoDictionary;
    NSMutableDictionary * _personIDToPersonInfoDictionary;
}

@property (nonatomic, retain) NSString *pathForPersonInfoDictionary;
@property (nonatomic, retain) NSMutableDictionary *personIDToPersonInfoDictionary;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)emailForPersonID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (void)initWithPath:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)pathForPersonInfoDictionary;
- (id)personIDToPersonInfoDictionary;
- (void)setPathForPersonInfoDictionary:(id)arg1;
- (void)setPersonIDToPersonInfoDictionary:(id)arg1;
- (bool)updateWithSharingRelationship:(id)arg1;

@end
