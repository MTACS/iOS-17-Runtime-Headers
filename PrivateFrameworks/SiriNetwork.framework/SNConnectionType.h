
@interface SNConnectionType : NSObject {
    SNConnectionTypeInternal * _underlyingConnectionType;
}

@property (nonatomic, retain) SNConnectionTypeInternal *underlyingConnectionType;

- (void).cxx_destruct;
- (bool)canUseWiFiDirectly;
- (id)description;
- (id)initWithTechnology:(long long)arg1;
- (bool)isEdge;
- (bool)isWWAN;
- (void)setUnderlyingConnectionType:(id)arg1;
- (long long)technology;
- (id)underlyingConnectionType;

@end
