
@interface BYSetupUserDisposition : NSObject {
    NSNumber * _child;
    NSDate * _date;
    NSNumber * _newUser;
    NSString * _productVersion;
}

@property (getter=isChild, nonatomic, retain) NSNumber *child;
@property (nonatomic, retain) NSDate *date;
@property (getter=isNewUser, nonatomic, retain) NSNumber *newUser;
@property (nonatomic, retain) NSString *productVersion;

+ (id)current;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_loadDataFromPreferences:(id)arg1;
- (id)date;
- (id)init;
- (id)initWithChild:(bool)arg1;
- (id)initWithNewUser:(bool)arg1 child:(bool)arg2;
- (id)initWithPreferences:(id)arg1;
- (id)initWithProductVersion:(id)arg1 date:(id)arg2;
- (id)initWithProductVersion:(id)arg1 date:(id)arg2 newUser:(bool)arg3 child:(bool)arg4;
- (id)isChild;
- (id)isNewUser;
- (void)persistUsingPreferences:(id)arg1;
- (id)productVersion;
- (void)setChild:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setNewUser:(id)arg1;
- (void)setProductVersion:(id)arg1;

@end
