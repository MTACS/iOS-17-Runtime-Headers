
@interface SiriCoreConnectionType : NSObject {
    long long  _technology;
}

- (unsigned long long)aggregatorConnectionType;
- (bool)canUseWiFiDirectly;
- (id)description;
- (long long)diagnosticConnectionType;
- (id)initWithTechnology:(long long)arg1;
- (bool)isEdge;
- (bool)isWWAN;
- (long long)technology;

@end
