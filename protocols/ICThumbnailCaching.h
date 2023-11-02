
@protocol ICThumbnailCaching

@required

- (NSDate *)creationDateFor:(ICThumbnailConfiguration *)arg1;
- (void)invalidateForObjectIdentifiers:(NSSet *)arg1;
- (ICThumbnailDescription *)objectForKeyedSubscript:(ICThumbnailConfiguration *)arg1;
- (void)setObject:(ICThumbnailDescription *)arg1 forKeyedSubscript:(ICThumbnailConfiguration *)arg2;

@end
