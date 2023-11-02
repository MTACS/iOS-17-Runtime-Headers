
@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _body;
    NSString * _categoryIdentifier;
    NSDate * _date;
    NSURL * _defaultActionURL;
    NSDate * _expirationDate;
    NSString * _filterCriteria;
    NSString * _iconIdentifier;
    unsigned long long  _interruptionLevel;
    NSArray * _peopleIdentifiers;
    NSString * _sectionIdentifier;
    bool  _shouldHideTime;
    bool  _shouldSuppressSyncDismissalWhenRemoved;
    CALNNotificationSound * _sound;
    NSString * _subtitle;
    NSString * _summaryArgument;
    unsigned long long  _summaryArgumentCount;
    NSString * _threadIdentifier;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *categoryIdentifier;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSURL *defaultActionURL;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *filterCriteria;
@property (nonatomic, readonly, copy) NSString *iconIdentifier;
@property (nonatomic, readonly) unsigned long long interruptionLevel;
@property (nonatomic, readonly, copy) NSArray *peopleIdentifiers;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, readonly) bool shouldHideTime;
@property (nonatomic, readonly) bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic, readonly, copy) CALNNotificationSound *sound;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *summaryArgument;
@property (nonatomic, readonly) unsigned long long summaryArgumentCount;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 sectionIdentifier:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 defaultActionURL:(id)arg8 iconIdentifier:(id)arg9 shouldHideTime:(bool)arg10 shouldSuppressSyncDismissalWhenRemoved:(bool)arg11 peopleIdentifiers:(id)arg12 sound:(id)arg13 userInfo:(id)arg14 threadIdentifier:(id)arg15 summaryArgument:(id)arg16 summaryArgumentCount:(unsigned long long)arg17 interruptionLevel:(unsigned long long)arg18 filterCriteria:(id)arg19;
- (id)body;
- (id)categoryIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)defaultActionURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)filterCriteria;
- (unsigned long long)hash;
- (id)iconIdentifier;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interruptionLevel;
- (bool)isEqual:(id)arg1;
- (bool)isEqualForDiffingPurposesToContent:(id)arg1;
- (bool)isEqualToContent:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)peopleIdentifiers;
- (id)sectionIdentifier;
- (bool)shouldHideTime;
- (bool)shouldSuppressSyncDismissalWhenRemoved;
- (id)sound;
- (id)subtitle;
- (id)summaryArgument;
- (unsigned long long)summaryArgumentCount;
- (id)threadIdentifier;
- (id)title;
- (id)userInfo;

@end
