
@interface NTPBWidgetSectionsArticleCountPair : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _countOfArticlesExposedEachSections;
    NSString * _widgetSectionIdsExposed;
    NSString * _widgetSectionSubidsExposed;
}

@property (nonatomic, readonly) long long*countOfArticlesExposedEachSections;
@property (nonatomic, readonly) unsigned long long countOfArticlesExposedEachSectionsCount;
@property (nonatomic, readonly) bool hasWidgetSectionIdsExposed;
@property (nonatomic, readonly) bool hasWidgetSectionSubidsExposed;
@property (nonatomic, retain) NSString *widgetSectionIdsExposed;
@property (nonatomic, retain) NSString *widgetSectionSubidsExposed;

- (void).cxx_destruct;
- (void)addCountOfArticlesExposedEachSection:(long long)arg1;
- (void)clearCountOfArticlesExposedEachSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1;
- (long long*)countOfArticlesExposedEachSections;
- (unsigned long long)countOfArticlesExposedEachSectionsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWidgetSectionIdsExposed;
- (bool)hasWidgetSectionSubidsExposed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountOfArticlesExposedEachSections:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setWidgetSectionIdsExposed:(id)arg1;
- (void)setWidgetSectionSubidsExposed:(id)arg1;
- (id)widgetSectionIdsExposed;
- (id)widgetSectionSubidsExposed;
- (void)writeTo:(id)arg1;

@end
