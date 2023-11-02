
@interface MUConstraintLayout : NSObject {
    MUConstraintLayoutInternal * _internal;
}

@property (nonatomic, readonly) MUConstraintLayoutInternal *internal;
@property (nonatomic, readonly) NSArray *layoutConstraints;
@property (nonatomic, readonly) NSArray *layoutGuides;
@property (nonatomic) long long mode;
@property (nonatomic) UIView *viewForForwardingSetNeedsUpdateConstraints;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (id)initWithInternal:(id)arg1;
- (id)internal;
- (id)layoutConstraints;
- (id)layoutGuides;
- (long long)mode;
- (void)prepare;
- (void)setMode:(long long)arg1;
- (void)setViewForForwardingSetNeedsUpdateConstraints:(id)arg1;
- (id)viewForForwardingSetNeedsUpdateConstraints;

@end
