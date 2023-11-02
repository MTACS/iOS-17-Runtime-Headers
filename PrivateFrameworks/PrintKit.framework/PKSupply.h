
@interface PKSupply : NSObject {
    NSArray * _colors;
    int  _highLevel;
    int  _level;
    int  _lowLevel;
    NSString * _markerType;
    NSString * _name;
    long long  _supplyType;
}

@property (readonly) NSArray *colors;
@property (readonly) int highLevel;
@property (readonly) int level;
@property (readonly) int lowLevel;
@property (readonly) NSString *markerType;
@property (readonly) NSString *name;
@property (readonly) long long supplyType;

+ (bool)isValidColorString:(const char *)arg1;

- (void).cxx_destruct;
- (id)colors;
- (id)description;
- (int)highLevel;
- (id)initWithName:(const char *)arg1 markerType:(const char *)arg2 colors:(const char *)arg3 level:(int)arg4 lowLevel:(int)arg5 highLevel:(int)arg6;
- (int)level;
- (int)lowLevel;
- (id)markerType;
- (id)name;
- (long long)supplyType;

@end
