
@interface _CDPeopleSuggesterContext : NSObject <NSCopying> {
    _CDInteraction * _activeInteraction;
    NSString * _consumerIdentifier;
    NSString * _contactPrefix;
    NSSet * _contentUTIs;
    NSDate * _date;
    NSString * _locationUUID;
    NSSet * _nearbyPeople;
    NSSet * _seedContactIdentifiers;
    NSString * _title;
}

@property (retain) _CDInteraction *activeInteraction;
@property (retain) NSString *consumerIdentifier;
@property (retain) NSString *contactPrefix;
@property (retain) NSSet *contentUTIs;
@property (retain) NSDate *date;
@property (retain) NSString *locationUUID;
@property (retain) NSSet *nearbyPeople;
@property (retain) NSSet *seedContactIdentifiers;
@property (retain) NSString *title;

+ (id)currentContext;

- (void).cxx_destruct;
- (id)activeInteraction;
- (id)consumerIdentifier;
- (id)contactPrefix;
- (id)contentUTIs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)init;
- (id)locationUUID;
- (id)nearbyPeople;
- (id)seedContactIdentifiers;
- (void)setActiveInteraction:(id)arg1;
- (void)setConsumerIdentifier:(id)arg1;
- (void)setContactPrefix:(id)arg1;
- (void)setContentUTIs:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setLocationUUID:(id)arg1;
- (void)setNearbyPeople:(id)arg1;
- (void)setSeedContactIdentifiers:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
