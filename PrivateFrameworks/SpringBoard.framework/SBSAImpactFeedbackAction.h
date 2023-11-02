
@interface SBSAImpactFeedbackAction : NSObject <SBSAActionRepresenting> {
    long long  _impactFeedbackStyle;
    bool  _prepareOnly;
    NSArray * _reasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long impactFeedbackStyle;
@property (nonatomic, readonly) bool prepareOnly;
@property (nonatomic, readonly, copy) NSArray *reasons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)impactFeedbackStyle;
- (id)initWithImpactFeedbackStyle:(long long)arg1 prepareOnly:(bool)arg2 reasons:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)prepareOnly;
- (id)reasons;

@end
