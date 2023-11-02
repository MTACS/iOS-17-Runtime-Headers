
@interface GEOPOIEventCategory : NSObject <NSSecureCoding> {
    NSString * _category;
    NSArray * _localizedNames;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSArray *localizedNames;

+ (id)poiEventCategoriesForEventCategories:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCategory:(id)arg1 localizedNames:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventCategory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPOIEventCategory:(id)arg1;
- (id)localizedNames;
- (id)parsePDCategories:(id)arg1;

@end
