
@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet * _domains;
}

- (void).cxx_destruct;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (id)allDomains;
- (bool)containsDomain:(id)arg1;
- (bool)isEmpty;
- (bool)isEqualToDomainSelection:(id)arg1;

@end
