
@interface _PSMapsPredictionContext : NSObject <NSSecureCoding> {
    NSString * _bundleID;
    NSString * _navigationEndLocationId;
    NSString * _navigationStartLocationId;
    NSArray * _seedContactIdentifiers;
    NSDate * _suggestionDate;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *navigationEndLocationId;
@property (nonatomic, copy) NSString *navigationStartLocationId;
@property (nonatomic, copy) NSArray *seedContactIdentifiers;
@property (nonatomic, copy) NSDate *suggestionDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)navigationEndLocationId;
- (id)navigationStartLocationId;
- (id)seedContactIdentifiers;
- (void)setBundleID:(id)arg1;
- (void)setNavigationEndLocationId:(id)arg1;
- (void)setNavigationStartLocationId:(id)arg1;
- (void)setSeedContactIdentifiers:(id)arg1;
- (void)setSuggestionDate:(id)arg1;
- (id)suggestionDate;

@end
