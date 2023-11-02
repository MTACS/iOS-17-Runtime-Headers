
@interface BKSSceneHostSettings : NSObject <BSDescriptionStreamable, NSSecureCoding> {
    NSString * _identifier;
    long long  _touchBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long touchBehavior;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 touchBehavior:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)touchBehavior;

@end
