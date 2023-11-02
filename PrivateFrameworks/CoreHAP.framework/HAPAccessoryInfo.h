
@interface HAPAccessoryInfo : HMFObject {
    bool  _authenticated;
    NSNumber * _category;
    NSString * _certificationStatus;
    NSString * _denylisted;
    NSString * _manufacturer;
    NSString * _modelName;
    NSString * _name;
    NSString * _ppid;
}

@property (nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) NSNumber *category;
@property (nonatomic, readonly) NSString *certificationStatus;
@property (nonatomic, readonly) NSString *denylisted;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *ppid;

- (void).cxx_destruct;
- (bool)authenticated;
- (id)category;
- (id)certificationStatus;
- (id)denylisted;
- (id)description;
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 modelName:(id)arg3 category:(id)arg4 certificationStatus:(id)arg5 denylisted:(id)arg6 ppid:(id)arg7;
- (bool)isCertified;
- (bool)isDenylisted;
- (id)manufacturer;
- (id)modelName;
- (id)name;
- (id)ppid;

@end
