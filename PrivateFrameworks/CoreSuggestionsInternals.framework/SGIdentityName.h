
@interface SGIdentityName : NSObject {
    NSString * _firstname;
    NSString * _middlename;
    NSString * _prefix;
    NSString * _privFullName;
    NSString * _suffix;
    NSString * _surname;
}

@property (nonatomic, readonly) NSString *firstname;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *middlename;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSString *suffix;
@property (nonatomic, readonly) NSString *surname;

+ (id)nameWithString:(id)arg1;
+ (id)patterns;

- (void).cxx_destruct;
- (id)firstname;
- (id)fullName;
- (id)initWithChineseName:(id)arg1;
- (id)initWithJapaneseName:(id)arg1;
- (id)initWithKoreanName:(id)arg1;
- (id)initWithSpanishName:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithVietnameseName:(id)arg1;
- (id)initWithWesternName:(id)arg1;
- (id)middlename;
- (id)prefix;
- (id)segmentWesternNameWithNameParts:(id)arg1 andPrefix:(id)arg2;
- (id)suffix;
- (id)surname;
- (id)toSGNameWithOrigin:(id)arg1 recordId:(id)arg2 extractionInfo:(id)arg3;

@end
