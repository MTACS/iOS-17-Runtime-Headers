
@interface HMMTRDuration : NSObject {
    NSNumber * _duration;
    NSString * _name;
}

@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)duration;
- (id)initWithName:(id)arg1 duration:(id)arg2;
- (id)name;

@end
