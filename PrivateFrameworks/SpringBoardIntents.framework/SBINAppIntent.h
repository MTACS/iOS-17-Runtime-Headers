
@interface SBINAppIntent : NSObject <BSDescriptionStreamable> {
    NSString * _identifier;
    SBINAppIntentSystemContext * _systemContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBINAppIntentSystemContext *systemContext;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 systemContext:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)systemContext;

@end
