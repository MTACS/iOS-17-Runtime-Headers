
@interface ICFolderListSectionIdentifier : NSObject <ICSectionIdentifier> {
    NSManagedObjectID * _accountObjectID;
    long long  _sectionType;
    NSString * _title;
}

@property (nonatomic, retain) NSManagedObjectID *accountObjectID;
@property (getter=isCollapsible, nonatomic, readonly) bool collapsible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *expansionStateContext;
@property (nonatomic, readonly) bool hasHeader;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ICItemIdentifier> *parentIdentifier;
@property (nonatomic) long long sectionType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)sortDescriptors;
+ (id)systemSectionIdentifier;
+ (id)tagSectionIdentifier;

- (void).cxx_destruct;
- (id)accountObjectID;
- (long long)accountSectionTypeForLegacyAccount:(id)arg1;
- (long long)accountSectionTypeForModernAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)expansionStateContext;
- (bool)hasHeader;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (id)initWithSectionType:(long long)arg1;
- (bool)isCollapsible;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICFolderListSectionIdentifier:(id)arg1;
- (long long)sectionType;
- (void)setAccountObjectID:(id)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
