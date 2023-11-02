
@interface SYActivityObserverContext : NSObject <NSSecureCoding> {
    bool  _needsCacheUpdate;
}

@property (nonatomic) bool needsCacheUpdate;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)needsCacheUpdate;
- (void)setNeedsCacheUpdate:(bool)arg1;

@end
