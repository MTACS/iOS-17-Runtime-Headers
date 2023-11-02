
@interface WFParameterRelationResource : WFResource <WFActionEventObserver> {
    WFAction * _action;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *parameterKey;
@property (readonly) Class superclass;

+ (bool)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)comparedValues;
- (id)initWithParameterKey:(id)arg1 parameterValues:(id)arg2 relation:(id)arg3;
- (id)parameterKey;
- (void)refreshAvailability;
- (void)setAction:(id)arg1;
- (void)setupWithAction:(id)arg1;

@end
