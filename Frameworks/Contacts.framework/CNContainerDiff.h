
@interface CNContainerDiff : NSObject {
    NSArray * _updates;
}

@property (nonatomic, retain) NSArray *updates;

+ (id)diffContainer:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUpdates:(id)arg1;
- (void)setUpdates:(id)arg1;
- (id)updates;

@end
