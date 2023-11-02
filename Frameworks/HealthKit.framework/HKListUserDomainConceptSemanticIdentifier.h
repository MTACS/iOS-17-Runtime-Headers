
@interface HKListUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier {
    unsigned long long  _listType;
}

@property (nonatomic, readonly) unsigned long long listType;

+ (id)semanticIdentifierWithComponents:(id)arg1;

- (id)init;
- (id)initWithListType:(unsigned long long)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (unsigned long long)listType;
- (id)stringValue;

@end
