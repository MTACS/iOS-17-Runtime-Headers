
@interface ECFlagChangeMessageActionResults : ECLocalMessageActionResults {
    NSIndexSet * _completedUIDs;
}

@property (nonatomic, readonly, copy) NSIndexSet *completedUIDs;

- (void).cxx_destruct;
- (id)completedUIDs;
- (id)initWithBuilder:(id /* block */)arg1;

@end
