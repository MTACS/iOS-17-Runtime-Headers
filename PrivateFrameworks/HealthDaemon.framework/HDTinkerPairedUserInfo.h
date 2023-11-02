
@interface HDTinkerPairedUserInfo : NSObject {
    NSNumber * _dsid;
    NSString * _firstName;
    NSString * _lastName;
}

@property (nonatomic, retain) NSNumber *dsid;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *lastName;

- (void).cxx_destruct;
- (id)description;
- (id)dsid;
- (id)firstName;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (void)setDsid:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;

@end
