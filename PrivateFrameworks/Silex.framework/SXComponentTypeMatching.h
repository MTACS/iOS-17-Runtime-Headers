
@interface SXComponentTypeMatching : NSObject {
    NSMutableArray * _descriptions;
}

@property (nonatomic, readonly) NSMutableArray *descriptions;

- (void).cxx_destruct;
- (void)addDescription:(id)arg1;
- (id)descriptions;
- (id)init;
- (id)match:(id)arg1;
- (void)removeDescription:(id)arg1;

@end
