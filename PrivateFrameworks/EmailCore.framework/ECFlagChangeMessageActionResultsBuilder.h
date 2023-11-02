
@interface ECFlagChangeMessageActionResultsBuilder : NSObject <ECFlagChangeMessageActionResultsBuilder> {
    NSMutableIndexSet * _completedUIDs;
    NSError * _error;
}

@property (nonatomic, readonly, copy) NSMutableIndexSet *completedUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)completedUIDs;
- (id)error;
- (id)init;
- (void)setError:(id)arg1;

@end
