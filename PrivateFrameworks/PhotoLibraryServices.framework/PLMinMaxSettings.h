
@interface PLMinMaxSettings : NSObject {
    NSNumber * _max;
    NSNumber * _min;
}

@property (nonatomic, retain) NSNumber *max;
@property (nonatomic, retain) NSNumber *min;

- (void).cxx_destruct;
- (id)max;
- (id)min;
- (void)setMax:(id)arg1;
- (void)setMin:(id)arg1;

@end
