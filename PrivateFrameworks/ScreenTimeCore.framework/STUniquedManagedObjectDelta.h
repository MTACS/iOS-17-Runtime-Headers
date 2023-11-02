
@interface STUniquedManagedObjectDelta : NSObject {
    long long  _changeType;
    NSString * _uniqueIdentifier;
    NSMutableSet * _updatedProperties;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSMutableSet *updatedProperties;

- (void).cxx_destruct;
- (long long)changeType;
- (void)deleted;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)inserted;
- (void)removePropertyWithName:(id)arg1;
- (void)setUpdatedProperties:(id)arg1;
- (id)uniqueIdentifier;
- (id)updatedProperties;
- (void)updatedWithProperties:(id)arg1;

@end
