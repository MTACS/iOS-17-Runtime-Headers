
@interface DNDSExplicitRegionStore : NSObject <NSCopying, NSMutableCopying> {
    NSSet * _enteredRegionIdentifiersPendingExit;
}

@property (nonatomic, readonly, copy) NSSet *enteredRegionIdentifiersPendingExit;

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithEnteredRegionIdentifiersPendingExit:(id)arg1;
- (id)_initWithStore:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (id)enteredRegionIdentifiersPendingExit;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
