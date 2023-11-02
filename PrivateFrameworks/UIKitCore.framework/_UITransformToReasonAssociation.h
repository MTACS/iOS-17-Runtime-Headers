
@interface _UITransformToReasonAssociation : NSObject {
    NSString * _reason;
    UITransform * _transform;
}

@property (nonatomic, copy) NSString *reason;
@property (nonatomic, retain) UITransform *transform;

+ (id)association:(id)arg1 reason:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTransform:(id)arg1 reason:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)transform;

@end
