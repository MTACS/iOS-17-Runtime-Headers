
@interface MPTiledArtworkRequest : NSObject <NSCopying> {
    bool  _allowsSynchronousArtworkCatalogsBlockExecution;
    id /* block */  _artworkCatalogsBlock;
    NSArray * _artworkCatalogsCache;
    long long  _artworkCatalogsCacheCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    <NSCopying> * _entityIdentifier;
    <NSCopying> * _namespaceIdentifier;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfRows;
    <NSCopying> * _revisionIdentifier;
    double  _tileSpacing;
}

@property (nonatomic) bool allowsSynchronousArtworkCatalogsBlockExecution;
@property (nonatomic, copy) id /* block */ artworkCatalogsBlock;
@property (nonatomic, copy) <NSCopying> *entityIdentifier;
@property (nonatomic, copy) <NSCopying> *namespaceIdentifier;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic, copy) <NSCopying> *revisionIdentifier;
@property (nonatomic) double tileSpacing;

- (void).cxx_destruct;
- (bool)allowsSynchronousArtworkCatalogsBlockExecution;
- (id /* block */)artworkCatalogsBlock;
- (id)artworkCatalogsWithCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entityIdentifier;
- (id)existingArtworkCatalogsWithCount:(long long)arg1;
- (bool)hasExistingArtworkCatalogsWithCount:(long long)arg1;
- (id)init;
- (id)namespaceIdentifier;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (id)revisionIdentifier;
- (void)setAllowsSynchronousArtworkCatalogsBlockExecution:(bool)arg1;
- (void)setArtworkCatalogsBlock:(id /* block */)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setNamespaceIdentifier:(id)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setRevisionIdentifier:(id)arg1;
- (void)setTileSpacing:(double)arg1;
- (double)tileSpacing;

@end
