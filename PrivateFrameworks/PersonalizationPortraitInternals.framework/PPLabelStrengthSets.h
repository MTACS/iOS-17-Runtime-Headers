
@interface PPLabelStrengthSets : NSObject {
    NSSet * _strong;
    NSSet * _weak;
}

@property (nonatomic, readonly) NSSet *strong;
@property (nonatomic, readonly) NSSet *weak;

+ (id)labelStrengthSetsWithWeakSet:(id)arg1 strongSet:(id)arg2;

- (void).cxx_destruct;
- (id)initWithWeakSet:(id)arg1 strongSet:(id)arg2;
- (id)strong;
- (id)weak;

@end
