
@interface CTSweetgumPlansInfo : NSObject <NSSecureCoding> {
    NSString * _morePlansURL;
    NSArray * _planGroups;
}

@property (nonatomic, retain) NSString *morePlansURL;
@property (nonatomic, retain) NSArray *planGroups;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)morePlansURL;
- (id)planGroups;
- (void)setMorePlansURL:(id)arg1;
- (void)setPlanGroups:(id)arg1;

@end
