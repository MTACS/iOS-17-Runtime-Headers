
@interface WFDeviceAttributeIdiomRequirement : NSObject {
    long long  _idiom;
    bool  _isEqual;
}

@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) bool isEqual;

- (long long)idiom;
- (id)initWithIdiom:(long long)arg1 isEqual:(bool)arg2;
- (bool)isEqual;

@end
