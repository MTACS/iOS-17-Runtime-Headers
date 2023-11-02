
@interface BLSHPresentationEntry : NSObject {
    <BLSHBacklightSceneHostEnvironment> * _environment;
    id  _userObject;
}

@property (nonatomic, readonly) BLSHEnvironmentDateSpecifier *currentSpecifier;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;
@property (nonatomic, retain) id userObject;

- (void).cxx_destruct;
- (id)currentSpecifier;
- (id)debugDescription;
- (id)description;
- (id)environment;
- (unsigned long long)hash;
- (id)initWithEnvironment:(id)arg1 userObject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setUserObject:(id)arg1;
- (id)userObject;

@end
