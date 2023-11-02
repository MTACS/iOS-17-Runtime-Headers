
@interface PHAssetLocalDateProperties : PHAssetPropertySet {
    long long  _creationDateSource;
    NSNumber * _inferredTimeZoneOffset;
}

@property (nonatomic, readonly) long long creationDateSource;
@property (nonatomic, readonly) NSNumber *inferredTimeZoneOffset;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (long long)creationDateSource;
- (id)inferredTimeZoneOffset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end
