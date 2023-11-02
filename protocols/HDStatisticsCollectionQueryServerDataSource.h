
@protocol HDStatisticsCollectionQueryServerDataSource <HDStatisticsCollectionCalculatorDataSource>

@required

- (NSNumber *)maxRowID;
- (NSSet *)restrictedSourceEntities;
- (void)setRestrictedSourceEntities:(NSSet *)arg1;
- (void)setShouldContinueHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id*, void*
- (id /* block */)shouldContinueHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id*, void*, id, SEL

@end
