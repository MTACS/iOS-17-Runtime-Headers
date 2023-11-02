
@interface DNDLifetimeDetails : NSObject <NSCopying> {
    NSString * _identifier;
    NSString * _metadata;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *metadata;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)lifetimeDetailsForEvent:(id)arg1 relativeToDate:(id)arg2;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsForPlaceInference:(id)arg1;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsUntilMorning;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 metadata:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)name;

@end
