
@interface CLSPublicEventCategory : NSObject <NSSecureCoding> {
    NSString * _category;
    NSString * _localizedName;
    NSArray * _localizedSubcategories;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSArray *localizedSubcategories;

+ (id)appleEvents;
+ (id)artsAndMuseums;
+ (id)businessAndTechnology;
+ (id)community;
+ (id)dance;
+ (id)educational;
+ (id)familyEvents;
+ (id)festivalsAndFairs;
+ (id)musicConcerts;
+ (id)nightLife;
+ (id)sports;
+ (bool)supportsSecureCoding;
+ (id)theater;
+ (id)tours;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)levelForLocalizedSubcategory:(id)arg1;
- (id)localizedName;
- (id)localizedSubcategories;
- (void)setLocalizedName:(id)arg1;
- (void)setLocalizedSubcategories:(id)arg1;

@end
