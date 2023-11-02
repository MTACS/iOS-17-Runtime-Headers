
@interface ICVirtualSmartFolderItemIdentifier : NSObject <ICItemIdentifier> {
    NSManagedObjectID * _accountObjectID;
    NSString * _customTitle;
    <ICItemIdentifier> * _parentIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly) NSManagedObjectID *accountObjectID;
@property (nonatomic, copy) NSString *customTitle;
@property (nonatomic) int dateHeadersType;
@property (nonatomic, readonly, copy) NSString *dateHeadersTypeUserDefaultsKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *defaultTitle;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) ICFolderCustomNoteSortType *noteSortType;
@property (nonatomic, readonly, copy) NSString *noteSortTypeUserDefaultsKey;
@property (nonatomic, readonly) <ICItemIdentifier> *parentIdentifier;
@property (nonatomic, readonly) ICQuery *query;
@property (getter=isShowingDateHeaders, nonatomic, readonly) bool showingDateHeaders;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDateHeaders;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic) long long visibility;
@property (nonatomic, readonly, copy) NSString *visibilityUserDefaultsKey;

+ (id)allTypes;

- (void).cxx_destruct;
- (id)accountObjectID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customTitle;
- (int)dateHeadersType;
- (id)dateHeadersTypeUserDefaultsKey;
- (id)defaultTitle;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 context:(id)arg3;
- (id)initWithType:(id)arg1 parentIdentifier:(id)arg2;
- (id)initWithType:(id)arg1 parentIdentifier:(id)arg2 accountObjectID:(id)arg3;
- (bool)isEmptyInContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHiddenInContext:(id)arg1;
- (bool)isShowingDateHeaders;
- (id)noteSortType;
- (id)noteSortTypeUserDefaultsKey;
- (id)parentIdentifier;
- (id)predicateForContext:(id)arg1;
- (id)query;
- (void)setCustomTitle:(id)arg1;
- (void)setDateHeadersType:(int)arg1;
- (void)setNoteSortType:(id)arg1;
- (void)setVisibility:(long long)arg1;
- (bool)supportsDateHeaders;
- (id)systemImageName;
- (id)title;
- (id)type;
- (long long)visibility;
- (id)visibilityUserDefaultsKey;
- (unsigned long long)visibleInvitationCountInContext:(id)arg1;
- (unsigned long long)visibleItemCountInContext:(id)arg1;
- (unsigned long long)visibleNoteCountInContext:(id)arg1;

@end
