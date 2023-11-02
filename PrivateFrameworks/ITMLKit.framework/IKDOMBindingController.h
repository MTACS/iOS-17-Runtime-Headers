
@interface IKDOMBindingController : NSObject <IKJSDataObserving> {
    IKAppContext * _appContext;
    IKDataBinding * _binding;
    NSDictionary * _bindingKeysByPathString;
    IKJSDataItem * _dataItem;
    IKDOMElement * _domElement;
    _IKDOMMutationRuleSet * _mutationRuleSet;
    IKDOMBindingController * _parent;
    NSDictionary * _prototypeGroupsByType;
    unsigned long long  _resolutionTarget;
    NSMutableArray * _scheduledUpdaters;
    <IKDOMBindingStrategy> * _strategy;
    struct { 
        bool hasKeysAffectingChildren; 
        bool hasKeysAffectingSubtree; 
        bool hasPrototypeDependentKeys; 
        bool hasValueDidChangeForKey; 
        bool hasDidResolveKeys; 
    }  _strategyFlags;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) IKDataBinding *binding;
@property (nonatomic, readonly) IKJSDataItem *dataItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKDOMElement *domElement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _IKDOMMutationRuleSet *mutationRuleSet;
@property (nonatomic, readonly) IKDOMBindingController *parent;
@property (nonatomic, readonly) NSDictionary *prototypeGroupsByType;
@property (nonatomic, readonly) unsigned long long resolutionTarget;
@property (nonatomic, readonly) <IKDOMBindingStrategy> *strategy;
@property (readonly) Class superclass;

+ (id)_parsedMutationRulesForDOMElement:(id)arg1;
+ (id)_prototypeGroupsByTypeForDOMElement:(id)arg1;
+ (id)domBindingControllerForDOMElement:(id)arg1;
+ (id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4;
+ (id)parsedBindingForDOMElement:(id)arg1;
+ (void)prepareForDOMElement:(id)arg1;

- (void).cxx_destruct;
- (bool)_canBeReused;
- (void)_evaluateMutationRules;
- (void)_resolveBinding;
- (id)appContext;
- (id)binding;
- (id)dataItem;
- (void)dataObservable:(id)arg1 didChangePropertyPathWithString:(id)arg2 extraInfo:(id)arg3;
- (void)dealloc;
- (id)domElement;
- (id)findPrototypeForDataItem:(id)arg1;
- (id)initWithDOMElement:(id)arg1;
- (id)mutationRuleSet;
- (id)parent;
- (id)prototypeGroupsByType;
- (unsigned long long)resolutionTarget;
- (void)scheduleUpdateUsingPreUpdate:(id /* block */)arg1 update:(id /* block */)arg2;
- (id)strategy;

@end
