
@interface WQAShapeLayer : CAShapeLayer {
    NSString * _quickActionIdentifier;
    long long  _quickActionVisualsToken;
}

@property (nonatomic, retain) NSString *quickActionIdentifier;
@property (nonatomic) long long quickActionVisualsToken;

- (void).cxx_destruct;
- (id)description;
- (id)quickActionIdentifier;
- (long long)quickActionVisualsToken;
- (void)setQuickActionIdentifier:(id)arg1;
- (void)setQuickActionVisualsToken:(long long)arg1;

@end
