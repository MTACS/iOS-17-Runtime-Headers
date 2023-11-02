
@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier {
    NSNumber * _seasonNumber;
}

@property (nonatomic, copy) NSNumber *seasonNumber;

+ (id)requiredMPPropertyNames;
+ (id)seasonIdentifierWithMediaItem:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;
- (id)initWithPersistentID:(id)arg1 seasonNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)seasonNumber;
- (void)setSeasonNumber:(id)arg1;

@end
