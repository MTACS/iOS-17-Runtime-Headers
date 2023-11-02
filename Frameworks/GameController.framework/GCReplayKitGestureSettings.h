
@interface GCReplayKitGestureSettings : NSObject <NSSecureCoding> {
    NSString * _controllerElementMappingKey;
    long long  _doublePressGesture;
    long long  _longPressGesture;
    long long  _singlePressGesture;
}

@property (nonatomic, retain) NSString *controllerElementMappingKey;
@property (nonatomic) long long doublePressGesture;
@property (nonatomic) long long longPressGesture;
@property (nonatomic) long long singlePressGesture;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)controllerElementMappingKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)doublePressGesture;
- (void)encodeWithCoder:(id)arg1;
- (long long)gestureModeForGestureType:(long long)arg1;
- (long long)gestureTypeForGestureMode:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)longPressGesture;
- (void)setControllerElementMappingKey:(id)arg1;
- (void)setDoublePressGesture:(long long)arg1;
- (void)setGestureMode:(long long)arg1 forGestureType:(long long)arg2;
- (void)setLongPressGesture:(long long)arg1;
- (void)setSinglePressGesture:(long long)arg1;
- (long long)singlePressGesture;

@end
