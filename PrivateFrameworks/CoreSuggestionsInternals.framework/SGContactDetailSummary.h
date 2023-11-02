
@interface SGContactDetailSummary : NSObject {
    NSString * _email;
    NSArray * _phones;
    NSArray * _socialProfileIdentifiers;
}

@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSArray *phones;
@property (nonatomic, copy) NSArray *socialProfileIdentifiers;

- (void).cxx_destruct;
- (id)email;
- (id)phones;
- (void)setEmail:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setSocialProfileIdentifiers:(id)arg1;
- (id)socialProfileIdentifiers;

@end
