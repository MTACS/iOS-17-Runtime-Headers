
@interface ICPersistenceConfiguration : NSObject {
    NSManagedObjectContext * _legacyViewContext;
    id /* block */  _makeLegacyBackgroundContext;
    id /* block */  _makeModernBackgroundContext;
    NSManagedObjectContext * _modernViewContext;
}

@property (nonatomic, readonly) NSManagedObjectContext *legacyBackgroundContext;
@property (nonatomic, retain) NSManagedObjectContext *legacyViewContext;
@property (nonatomic, copy) id /* block */ makeLegacyBackgroundContext;
@property (nonatomic, copy) id /* block */ makeModernBackgroundContext;
@property (nonatomic, readonly) NSManagedObjectContext *modernBackgroundContext;
@property (nonatomic, retain) NSManagedObjectContext *modernViewContext;

- (void).cxx_destruct;
- (id)legacyBackgroundContext;
- (id)legacyViewContext;
- (id /* block */)makeLegacyBackgroundContext;
- (id /* block */)makeModernBackgroundContext;
- (id)modernBackgroundContext;
- (id)modernViewContext;
- (void)setLegacyViewContext:(id)arg1;
- (void)setMakeLegacyBackgroundContext:(id /* block */)arg1;
- (void)setMakeModernBackgroundContext:(id /* block */)arg1;
- (void)setModernViewContext:(id)arg1;

@end
