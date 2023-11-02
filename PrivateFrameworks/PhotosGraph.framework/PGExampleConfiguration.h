
@interface PGExampleConfiguration : PGConfiguration {
    bool  _exampleBool;
    double  _exampleDouble;
    long long  _exampleInteger;
}

@property (nonatomic, readonly) bool exampleBool;
@property (nonatomic, readonly) double exampleDouble;
@property (nonatomic, readonly) long long exampleInteger;

- (bool)exampleBool;
- (double)exampleDouble;
- (long long)exampleInteger;

@end
