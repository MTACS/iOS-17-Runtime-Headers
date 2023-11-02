
@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding> {
    NSString * _groupId;
    NSArray * _groupOptionsList;
    long long  _planCategory;
}

@property (nonatomic, retain) NSString *groupId;
@property (nonatomic, retain) NSArray *groupOptionsList;
@property (nonatomic) long long planCategory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupId;
- (id)groupOptionsList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)planCategory;
- (void)setGroupId:(id)arg1;
- (void)setGroupOptionsList:(id)arg1;
- (void)setPlanCategory:(long long)arg1;

@end