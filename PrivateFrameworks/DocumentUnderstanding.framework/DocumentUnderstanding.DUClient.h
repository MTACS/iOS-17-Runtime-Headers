
@interface DocumentUnderstanding.DUClient : NSObject {
    void identifier;
    void scheduler;
    void topLevelSpecifications;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end
