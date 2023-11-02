
@interface HMDCHIPConnectedEcosystemsChangedBulletin : HMFObject {
    NSString * _body;
    NSDate * _dateOfOccurrence;
    NSString * _threadIdentifier;
    bool  _timeSensitive;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *body;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *threadIdentifier;
@property (getter=isTimeSensitive, readonly) bool timeSensitive;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)localizedBodyForAddedEcosystemHomeName:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
+ (id)localizedTitleForAddedEcosystemName:(id)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)body;
- (id)dateOfOccurrence;
- (id)initWithAddedPairing:(id)arg1 accessory:(id)arg2;
- (id)initWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 dateOfOccurrence:(id)arg4 userInfo:(id)arg5 isTimeSensitive:(bool)arg6;
- (bool)isTimeSensitive;
- (id)threadIdentifier;
- (id)title;
- (id)userInfo;

@end
