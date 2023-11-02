
@interface GDSoftware : NSObject <GDEntity, GDTripleIteratorEntityRenderer> {
    NSArray * _bundleIdentifiers;
    GDEntityIdentifier * _entityIdentifier;
}

@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)description;
- (id)entityIdentifier;
- (id)initWithTriplesIterator:(id)arg1;

@end
