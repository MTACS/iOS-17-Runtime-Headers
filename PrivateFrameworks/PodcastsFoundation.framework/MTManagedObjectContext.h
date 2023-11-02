
@interface MTManagedObjectContext : NSManagedObjectContext {
    bool  _isResetable;
    NSString * _mt_immutableName;
    long long  _type;
}

@property (nonatomic) bool isResetable;
@property (nonatomic, readonly) NSString *mt_immutableName;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (bool)_isInternalCoreDataQueue;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)deleteObject:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (bool)handleError:(id*)arg1 withCallback:(id /* block */)arg2;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1 name:(id)arg2;
- (void)insertObject:(id)arg1;
- (bool)isResetable;
- (id)mt_immutableName;
- (id)objectRegisteredForID:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)reset;
- (void)setIsResetable:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)validateConcurencyType;
- (void)validatePodcastDeletion:(id)arg1;

@end
