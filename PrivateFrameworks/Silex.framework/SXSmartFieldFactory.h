
@interface SXSmartFieldFactory : NSObject <SXSmartFieldFactory> {
    <SXActionProvider> * _actionProvider;
    <SXActionSerializer> * _actionSerializer;
}

@property (nonatomic, readonly) <SXActionProvider> *actionProvider;
@property (nonatomic, readonly) <SXActionSerializer> *actionSerializer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionProvider;
- (id)actionSerializer;
- (id)initWithActionProvider:(id)arg1 actionSerializer:(id)arg2;
- (id)smartFieldForAddition:(id)arg1 withContext:(id)arg2;

@end
