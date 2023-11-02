
@interface PHASEConeDirectivityModelParameters : PHASEDirectivityModelParameters {
    NSMutableArray * _internalArray;
}

@property (nonatomic, readonly) NSArray *subbandParameters;
@property (nonatomic, readonly) NSMutableArray *subbands;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubbandParameters:(id)arg1;
- (id)subbandParameters;
- (id)subbands;

@end
