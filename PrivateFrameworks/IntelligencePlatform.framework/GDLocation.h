
@interface GDLocation : NSObject <GDEntity, GDTripleIteratorEntityRenderer> {
    NSArray * _addresses;
    GDEntityIdentifier * _entityIdentifier;
    NSArray * _names;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) NSArray *names;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (void).cxx_destruct;
- (id)addresses;
- (id)description;
- (id)entityIdentifier;
- (id)initWithTriplesIterator:(id)arg1;
- (id)names;

@end
