
@interface ContentSearch : INObject

@property (nonatomic, retain) SearchAttributes *attributes;
@property (nonatomic, copy) NSString *episodeNumber;
@property (nonatomic) long long episodeReference;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) NSNumber *itemLimit;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *recommendedAge;
@property (nonatomic, retain) INDateComponentsRange *releaseDateRange;
@property (nonatomic, copy) NSArray *roles;
@property (nonatomic, copy) NSString *seasonNumber;
@property (nonatomic) long long seasonReference;
@property (nonatomic) long long sort;
@property (nonatomic, copy) NSString *studio;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *umcId;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
