
@interface GEOComposedRouteAdvisoryItemDetail : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _detailStrings;
    NSArray * _details;
    <GEOServerFormattedString> * _title;
    GEOComposedString * _titleString;
}

@property (nonatomic, readonly) NSArray *detailStrings;
@property (nonatomic, readonly) NSArray *details;
@property (nonatomic, readonly) <GEOServerFormattedString> *title;
@property (nonatomic, readonly) GEOComposedString *titleString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailStrings;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestrictionDetails:(id)arg1;
- (id)title;
- (id)titleString;

@end
