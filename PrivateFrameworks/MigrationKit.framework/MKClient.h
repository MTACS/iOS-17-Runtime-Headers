
@interface MKClient : NSObject {
    NSString * _brand;
    NSString * _hostname;
    NSString * _locale;
    NSString * _model;
    NSString * _name;
    NSString * _os;
    NSString * _version;
}

@property (nonatomic, copy) NSString *brand;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (id)brand;
- (id)hostname;
- (id)initWithHostname:(id)arg1 brand:(id)arg2 model:(id)arg3 name:(id)arg4 os:(id)arg5 version:(id)arg6 locale:(id)arg7;
- (id)locale;
- (id)model;
- (id)name;
- (id)os;
- (void)setBrand:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOs:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
