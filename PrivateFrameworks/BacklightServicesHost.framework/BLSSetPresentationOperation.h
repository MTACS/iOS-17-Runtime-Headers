
@interface BLSSetPresentationOperation : BLSHEnvironmentOperation {
    NSArray * _additions;
}

@property (nonatomic, readonly) NSArray *additions;

- (void).cxx_destruct;
- (id)additions;
- (id)description;
- (id)initWithBacklightState:(long long)arg1 additions:(id)arg2;

@end
