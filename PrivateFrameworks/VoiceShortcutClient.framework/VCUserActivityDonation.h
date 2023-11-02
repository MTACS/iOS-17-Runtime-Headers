
@interface VCUserActivityDonation : NSObject <VCActionDonation> {
    NSDate * _date;
    NSDate * _endDate;
    NSString * _identifier;
    INShortcut * _shortcut;
    NSString * _sourceAppIdentifier;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSString *fullDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) INShortcut *shortcut;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifierForDisplay;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifierForLaunching;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *suggestedPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) id uniqueProperty;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (id)timestampDateFormatter;

- (void).cxx_destruct;
- (id)date;
- (id)dateString;
- (id)endDate;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithEvent:(id)arg1;
- (id)initWithUserActivity:(id)arg1 identifier:(id)arg2 sourceAppIdentifier:(id)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)shortcut;
- (id)sourceAppIdentifier;
- (id)sourceAppIdentifierForDisplay;
- (id)sourceAppIdentifierForLaunching;
- (id)subtitle;
- (id)suggestedPhrase;
- (id)title;
- (id)uniqueProperty;
- (id)userActivity;

@end
