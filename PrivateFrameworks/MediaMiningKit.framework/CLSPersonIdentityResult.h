
@interface CLSPersonIdentityResult : NSObject {
    float  _confidence;
    CLSPersonIdentity * _person;
}

@property (nonatomic) float confidence;
@property (nonatomic, retain) CLSPersonIdentity *person;

+ (id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2;

- (void).cxx_destruct;
- (float)confidence;
- (id)description;
- (bool)isSamePersonAsResult:(id)arg1;
- (void)mergeWithResult:(id)arg1;
- (id)person;
- (void)setConfidence:(float)arg1;
- (void)setPerson:(id)arg1;

@end
