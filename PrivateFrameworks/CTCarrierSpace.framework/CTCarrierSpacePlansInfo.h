
@interface CTCarrierSpacePlansInfo : NSObject <NSSecureCoding> {
    NSString * _morePlansURL;
    NSArray * _planGroupsList;
}

@property (nonatomic, retain) NSString *morePlansURL;
@property (nonatomic, retain) NSArray *planGroupsList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)morePlansURL;
- (id)planGroupsList;
- (void)setMorePlansURL:(id)arg1;
- (void)setPlanGroupsList:(id)arg1;

@end
