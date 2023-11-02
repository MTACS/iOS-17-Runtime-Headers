
@interface _PSContactPrior : NSObject <NSCopying, NSSecureCoding> {
    CNContact * _contact;
    NSString * _contactIdentifier;
    NSString * _modelName;
    NSString * _modelVersion;
    float  _priorScore;
    unsigned int  _rank;
}

@property (nonatomic, copy) CNContact *contact;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic) float priorScore;
@property (nonatomic) unsigned int rank;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 priorScore:(float)arg2 rank:(unsigned int)arg3 modelName:(id)arg4 modelVersion:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)modelName;
- (id)modelVersion;
- (float)priorScore;
- (unsigned int)rank;
- (void)setContact:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setPriorScore:(float)arg1;
- (void)setRank:(unsigned int)arg1;

@end
