
@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _activatedDate;
    bool  _canNotify;
    NSDate * _featuredDate;
    NSDate * _firstViewedDate;
    NSString * _identifier;
}

@property (nonatomic, copy) NSDate *activatedDate;
@property (nonatomic) bool canNotify;
@property (nonatomic, copy) NSDate *featuredDate;
@property (nonatomic, copy) NSDate *firstViewedDate;
@property (nonatomic, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activatedDate;
- (bool)canNotify;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredDate;
- (id)firstViewedDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setActivatedDate:(id)arg1;
- (void)setCanNotify:(bool)arg1;
- (void)setFeaturedDate:(id)arg1;
- (void)setFirstViewedDate:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
