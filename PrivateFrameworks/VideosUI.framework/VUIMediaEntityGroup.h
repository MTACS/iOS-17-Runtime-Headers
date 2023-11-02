
@interface VUIMediaEntityGroup : NSObject <NSCopying> {
    NSObject<NSCopying> * _identifier;
    NSArray * _mediaEntities;
    NSArray * _sortIndexes;
}

@property (nonatomic, copy) NSObject<NSCopying> *identifier;
@property (nonatomic, copy) NSArray *mediaEntities;
@property (nonatomic, copy) NSArray *sortIndexes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaEntities;
- (void)setIdentifier:(id)arg1;
- (void)setMediaEntities:(id)arg1;
- (void)setSortIndexes:(id)arg1;
- (id)sortIndexes;

@end
