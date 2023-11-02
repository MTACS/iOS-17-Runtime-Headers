
@interface SNConnectionTypeInternal : NSObject {
    void connectionType;
}

- (bool)canUseWiFiDirectly;
- (long long)connectionTypeRawValue;
- (id)connectionTypeStringRawValue;
- (id)init;
- (id)init:(long long)arg1;
- (bool)isEdge;
- (bool)isWWAN;

@end
