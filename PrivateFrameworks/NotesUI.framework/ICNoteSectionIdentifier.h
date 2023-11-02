
@interface ICNoteSectionIdentifier : NSObject <ICSectionIdentifier> {
    long long  _sectionType;
}

@property (getter=isCollapsible, nonatomic, readonly) bool collapsible;
@property (nonatomic, readonly) bool containsRelevantIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *expansionStateContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ICItemIdentifier> *parentIdentifier;
@property (nonatomic) long long sectionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)sortDescriptors;
+ (id)titles;

- (bool)containsRelevantIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)expansionStateContext;
- (unsigned long long)hash;
- (id)initWithNoteSectionType:(long long)arg1;
- (bool)isCollapsible;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICNoteSectionIdentifier:(id)arg1;
- (long long)sectionType;
- (void)setSectionType:(long long)arg1;
- (id)title;

@end
