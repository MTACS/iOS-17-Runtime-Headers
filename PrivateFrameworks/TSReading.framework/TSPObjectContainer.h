
@interface TSPObjectContainer : TSPObject {
    NSArray * _childObjects;
    unsigned char  _packageIdentifier;
}

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1;

- (void).cxx_destruct;
- (unsigned int)delayedArchivingPriority;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (id)packageLocator;
- (void)prepareForComponentWriteWithDelayedObjects:(id)arg1;
- (bool)shouldDelayArchiving;
- (long long)tsp_identifier;

@end
