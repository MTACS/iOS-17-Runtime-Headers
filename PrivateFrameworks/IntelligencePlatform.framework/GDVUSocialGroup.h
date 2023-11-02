
@interface GDVUSocialGroup : NSObject {
    void inner;
}

@property (nonatomic, readonly) NSNumber *numberOfMomentNodes;
@property (nonatomic, readonly) NSArray *tags;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNumberOfMomentNodes:(id)arg1 tags:(id)arg2;
- (id)numberOfMomentNodes;
- (id)tags;

@end
