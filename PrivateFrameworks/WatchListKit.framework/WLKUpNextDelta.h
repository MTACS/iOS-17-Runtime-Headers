
@interface WLKUpNextDelta : NSObject <WLKMergeableCoding> {
    NSDictionary * _backingDictionary;
    NSDate * _expirationDate;
    NSArray * _items;
    NSDate * _timestamp;
}

@property (nonatomic, readonly, copy) NSArray *additions;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSArray *removals;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;
+ (id)useWidgetImagesIfAvailable:(id)arg1;

- (void).cxx_destruct;
- (id)_deltaByMergingItemsFromDelta:(id)arg1;
- (id)additions;
- (id)dataByMergingWith:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isExpired;
- (id)items;
- (id)removals;
- (id)timestamp;

@end
