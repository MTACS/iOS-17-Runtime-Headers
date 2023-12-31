
@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable * _overrideURLs;
    NSString * _uuid;
}

- (void).cxx_destruct;
- (void)delete;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;
- (bool)isActive;
- (void)makeActive;
- (id)overrideURLs;
- (void)save;
- (void)updateWithURLs:(id)arg1;

@end
