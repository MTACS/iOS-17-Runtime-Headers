
@interface WFFavoriteLocationResponse : WFResponse {
    NSArray * _favoriteLocations;
}

@property (nonatomic, readonly) NSArray *favoriteLocations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)favoriteLocations;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 favorites:(id)arg2;

@end
