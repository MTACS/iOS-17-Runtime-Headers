
@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {
    CSSearchQuery * _searchQuery;
    FPQueryEnumerationSettings * _settings;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) FPQueryEnumerationSettings *settings;

- (void).cxx_destruct;
- (void)augmentQueryContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)desiredCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemQueryDescriptor:(id)arg1;
- (bool)keepCollectorsAlive;
- (id)name;
- (id)queryStringForMountPoint:(id)arg1;
- (id)settings;
- (bool)supportsQueryingAllMountPoints;

@end
