
@interface HealthPlatformCore.FeedItem : NSManagedObject

@property (nonatomic, copy) NSString *actionHandlerClassName;
@property (nonatomic, copy) NSData *actionHandlerUserData;
@property (nonatomic, copy) NSString *baseAutomationIdentifier;
@property (nonatomic, copy) NSDate *boundingEndDate;
@property (nonatomic, copy) NSDate *boundingStartDate;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSString *contentConfigurationProviderClassName;
@property (nonatomic, copy) NSString *contentKindRawValue;
@property (nonatomic, copy) NSSet *dataTypes;
@property (nonatomic, copy) NSDate *dateSubmitted;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *favoriteStatusRawValue;
@property (nonatomic, copy) NSSet *featureTags;
@property (nonatomic, retain) _TtC18HealthPlatformCore11FeedSection *feedSection;
@property (nonatomic) bool hideInDiscover;
@property (nonatomic, copy) NSString *hostViewStyleRawValue;
@property (nonatomic, copy) NSString *hostingControllerClassName;
@property (nonatomic) bool indexForSearch;
@property (nonatomic, copy) NSSet *keywords;
@property (nonatomic, copy) NSString *listContentConfigurationProviderClassName;
@property (nonatomic, copy) NSString *localizedCategoryName;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *pluginPackage;
@property (nonatomic, copy) NSSet *profiles;
@property (nonatomic, copy) NSDate *relevantEndDate;
@property (nonatomic) double relevantRampDownTime;
@property (nonatomic) double relevantRampUpTime;
@property (nonatomic, copy) NSDate *relevantStartDate;
@property (nonatomic) short searchSectionHintRawValue;
@property (nonatomic) short searchSectionRawValue;
@property (nonatomic) long long sectionSortOrder;
@property (nonatomic, copy) NSSet *sharableModelReferences;
@property (nonatomic) long long sortHint;
@property (nonatomic) long long sortOrder;
@property (nonatomic, copy) NSString *storyboardIdentifier;
@property (nonatomic) double suggestionRelevanceScore;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSData *userData;
@property (nonatomic) bool usesPlatformView;
@property (nonatomic, copy) NSString *viewClassName;
@property (nonatomic, copy) NSString *viewControllerClassName;

- (void).cxx_construct;
- (id)description;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
