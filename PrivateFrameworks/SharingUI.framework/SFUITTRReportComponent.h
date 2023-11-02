
@interface SFUITTRReportComponent : NSObject {
    NSString * _identifier;
    NSString * _name;
    NSString * _version;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *version;

+ (id)peopleSuggesterComponent;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
