
@interface SBActivityProvidedContentElement : SBSystemApertureProvidedContentElement <SAActivityBehavior> {
    <SAActivityHosting> * _activityHost;
}

@property (nonatomic) <SAActivityHosting> *activityHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityHost;
- (bool)hasActivityBehavior;
- (void)setActivityHost:(id)arg1;

@end
