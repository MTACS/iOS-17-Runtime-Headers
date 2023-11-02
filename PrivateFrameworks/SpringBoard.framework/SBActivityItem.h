
@interface SBActivityItem : NSObject <BSDescriptionProviding> {
    ACActivityContentUpdate * _contentUpdate;
    ACActivityDescriptor * _descriptor;
    NSString * _identifier;
    double  _relevanceScore;
}

@property (nonatomic, retain) ACActivityContentUpdate *contentUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ACActivityDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) double relevanceScore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentUpdate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptor;
- (id)identifier;
- (id)initWithContentUpdate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)relevanceScore;
- (void)setContentUpdate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
