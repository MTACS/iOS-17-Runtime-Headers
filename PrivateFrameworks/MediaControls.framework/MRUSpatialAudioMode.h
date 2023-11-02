
@interface MRUSpatialAudioMode : NSObject {
    bool  _isEnabled;
    long long  _type;
}

@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) long long type;

- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 isEnabled:(bool)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
