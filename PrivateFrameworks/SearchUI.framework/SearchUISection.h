
@interface SearchUISection : NSObject {
    SFCollectionCardSection * _collectionSection;
    SFResultSection * _resultSection;
    NSString * _reuseIdentifier;
    NSString * _sectionIdentifier;
}

@property (readonly) SFCollectionCardSection *collectionSection;
@property (readonly) SFResultSection *resultSection;
@property (readonly) NSString *reuseIdentifier;
@property (readonly) NSString *sectionIdentifier;

+ (id)reuseIdentifierForCollectionSection;
+ (id)reuseIdentifierForSectionResult;
+ (id)sectionWithResultSection:(id)arg1 collectionCardSection:(id)arg2 sectionIdentifier:(id)arg3;
+ (id)sectionWithResultSection:(id)arg1 sectionIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)collectionSection;
- (id)initWithResultSection:(id)arg1 collectionSection:(id)arg2 sectionIdentifier:(id)arg3;
- (id)resultSection;
- (id)reuseIdentifier;
- (id)sectionIdentifier;

@end
