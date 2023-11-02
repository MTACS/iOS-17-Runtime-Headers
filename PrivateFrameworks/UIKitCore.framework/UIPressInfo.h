
@interface UIPressInfo : NSObject {
    unsigned long long  _clickCount;
    unsigned int  _contextID;
    double  _force;
    unsigned long long  _gameControllerComponent;
    UIKey * _key;
    bool  _longClick;
    long long  _modifierFlags;
    long long  _phase;
    unsigned long long  _source;
    double  _timestamp;
    long long  _type;
}

@property (nonatomic) unsigned long long clickCount;
@property (nonatomic) unsigned int contextID;
@property (nonatomic) double force;
@property (nonatomic) unsigned long long gameControllerComponent;
@property (nonatomic, retain) UIKey *key;
@property (getter=isLongClick, nonatomic) bool longClick;
@property (nonatomic) long long modifierFlags;
@property (nonatomic) long long phase;
@property (nonatomic) unsigned long long source;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;

+ (id)_keyboardPressInfoForType:(long long)arg1 isKeyDown:(bool)arg2 timestamp:(double)arg3 contextID:(unsigned int)arg4 modifierFlags:(long long)arg5;

- (void).cxx_destruct;
- (id)_sourceDescription;
- (unsigned long long)clickCount;
- (unsigned int)contextID;
- (id)description;
- (double)force;
- (unsigned long long)gameControllerComponent;
- (id)init;
- (bool)isLongClick;
- (id)key;
- (long long)modifierFlags;
- (long long)phase;
- (void)setClickCount:(unsigned long long)arg1;
- (void)setContextID:(unsigned int)arg1;
- (void)setForce:(double)arg1;
- (void)setGameControllerComponent:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setLongClick:(bool)arg1;
- (void)setModifierFlags:(long long)arg1;
- (void)setPhase:(long long)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (unsigned long long)source;
- (double)timestamp;
- (long long)type;

@end
