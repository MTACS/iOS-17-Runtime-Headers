
@interface GDKnosisFact : NSObject <NSSecureCoding> {
    NSString * _factId;
    NSArray * _objectAlias;
    NSString * _objectID;
    NSNumber * _objectPopularity;
    NSArray * _predicateAlias;
    NSString * _predicateId;
    NSNumber * _predicatePopularity;
    NSArray * _qualifiers;
    NSNumber * _score;
    NSArray * _subjectAlias;
    NSString * _subjectId;
    NSArray * _subjectIsa;
    NSNumber * _subjectPopularity;
}

@property (nonatomic, readonly, copy) NSString *factId;
@property (nonatomic, readonly, copy) NSArray *objectAlias;
@property (nonatomic, readonly, copy) NSString *objectID;
@property (nonatomic, readonly, copy) NSNumber *objectPopularity;
@property (nonatomic, readonly, copy) NSArray *predicateAlias;
@property (nonatomic, readonly, copy) NSString *predicateId;
@property (nonatomic, readonly, copy) NSNumber *predicatePopularity;
@property (nonatomic, readonly, copy) NSArray *qualifiers;
@property (nonatomic, readonly, copy) NSNumber *score;
@property (nonatomic, readonly, copy) NSArray *subjectAlias;
@property (nonatomic, readonly, copy) NSString *subjectId;
@property (nonatomic, readonly, copy) NSArray *subjectIsa;
@property (nonatomic, readonly, copy) NSNumber *subjectPopularity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)factId;
- (id)initWithCoder:(id)arg1;
- (id)initWithFactId:(id)arg1 score:(id)arg2 subjectId:(id)arg3 subjectAlias:(id)arg4 subjectPopularity:(id)arg5 subjectIsa:(id)arg6 predicateId:(id)arg7 predicateAlias:(id)arg8 predicatePopularity:(id)arg9 objectID:(id)arg10 objectAlias:(id)arg11 objectPopularity:(id)arg12 qualifiers:(id)arg13;
- (id)objectAlias;
- (id)objectID;
- (id)objectPopularity;
- (id)predicateAlias;
- (id)predicateId;
- (id)predicatePopularity;
- (id)qualifiers;
- (id)score;
- (id)subjectAlias;
- (id)subjectId;
- (id)subjectIsa;
- (id)subjectPopularity;

@end
