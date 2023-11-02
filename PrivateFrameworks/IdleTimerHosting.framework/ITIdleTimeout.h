
@interface ITIdleTimeout : NSObject <BSDescriptionProviding, NSCopying> {
    double  _duration;
    unsigned long long  _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (readonly) Class superclass;

+ (id /* block */)timeoutGeneratorUsingIdentifier:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)duration;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithDuration:(double)arg1;
- (id)initWithDuration:(double)arg1 identifier:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
