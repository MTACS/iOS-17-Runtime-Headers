
@interface BMBehaviorStorage : NSObject {
    NSURL * _URL;
    NSPersistentContainer * _container;
    NSManagedObjectContext * _context;
    BMManagedObjectConverter * _converter;
    BMBehaviorDatabaseMetadata * _metadata;
    bool  _readOnly;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) NSPersistentContainer *container;
@property (nonatomic, retain) NSManagedObjectContext *context;
@property (nonatomic, retain) BMManagedObjectConverter *converter;
@property (nonatomic, retain) BMBehaviorDatabaseMetadata *metadata;
@property (nonatomic, readonly) bool readOnly;

+ (id)defaultURL;

- (void).cxx_destruct;
- (id)URL;
- (id)container;
- (id)context;
- (id)converter;
- (id)description;
- (id)fetchRulesWithAbsoluteSupport:(unsigned long long)arg1 support:(double)arg2 confidence:(double)arg3 conviction:(double)arg4 lift:(double)arg5 rulePowerFactor:(double)arg6 uniqueDaysLastWeek:(unsigned long long)arg7 uniqueDaysTotal:(unsigned long long)arg8 filters:(id)arg9 limit:(unsigned long long)arg10 error:(id*)arg11;
- (id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id*)arg4;
- (id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithURL:(id)arg1 readOnly:(bool)arg2;
- (id)initWithURL:(id)arg1 readOnly:(bool)arg2 error:(id*)arg3;
- (id)metadata;
- (bool)readOnly;
- (void)resetStorageWithMetadata:(id)arg1 error:(id*)arg2;
- (void)saveRules:(id)arg1 error:(id*)arg2;
- (void)setContainer:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setConverter:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setURL:(id)arg1;

@end
