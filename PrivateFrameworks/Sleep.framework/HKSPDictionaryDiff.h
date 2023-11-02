
@interface HKSPDictionaryDiff : NSObject {
    NSSet * _removedKeys;
    NSDictionary * _updatedProperties;
}

@property (nonatomic, readonly) bool equalDictionaries;
@property (nonatomic, readonly) NSSet *removedKeys;
@property (nonatomic, readonly) NSDictionary *updatedProperties;

- (void).cxx_destruct;
- (bool)equalDictionaries;
- (id)initWithOriginalDictionary:(id)arg1 updatedDictionary:(id)arg2 keysToDiff:(id)arg3;
- (id)removedKeys;
- (id)updatedProperties;

@end
