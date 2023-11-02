
@interface TIMockContact : NSObject {
    NSString * _firstName;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickName;
    float  _relevancyScore;
}

@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic) float relevancyScore;

- (void).cxx_destruct;
- (id)firstName;
- (id)lastName;
- (id)middleName;
- (id)nickName;
- (float)relevancyScore;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setRelevancyScore:(float)arg1;

@end
