
@interface PHLibraryScopeCondition : NSObject <NSCopying> {
    PLLibraryScopeCondition * _proxyObject;
}

@property (nonatomic) unsigned long long criteria;
@property (nonatomic, retain) PLLibraryScopeCondition *proxyObject;
@property (nonatomic, readonly) unsigned long long type;

+ (Class)_mappedPLConditionClass;
+ (id)forwardingTargetForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithProxyObject:(id)arg1;
- (id)proxyObject;
- (void)setProxyObject:(id)arg1;

@end
