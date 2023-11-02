
@interface VKARWalkingFeature : NSObject {
    unsigned long long  _intraFeaturePriority;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long intraFeaturePriority;
@property (nonatomic, readonly) long long type;

- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 intraFeaturePriority:(unsigned long long)arg2;
- (unsigned long long)intraFeaturePriority;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
