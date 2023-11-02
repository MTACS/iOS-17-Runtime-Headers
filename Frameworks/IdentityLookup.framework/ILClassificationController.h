
@interface ILClassificationController : NSObject {
    NSHashTable * _delegates;
    NSExtension * _electedExtension;
    NSArray * _extensions;
    id /* block */  _firstMatchCompletionBlock;
    id  _matchingExtensionToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isClassificationAvailable, nonatomic, readonly) bool classificationAvailable;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (nonatomic, copy) NSExtension *electedExtension;
@property (nonatomic, copy) NSArray *extensions;
@property (nonatomic, copy) id /* block */ firstMatchCompletionBlock;
@property (nonatomic, readonly) id matchingExtensionToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)electedExtensionFromExtensions:(id)arg1;
+ (id)sharedInstance;
+ (bool)shouldActivate;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addDelegate:(id)arg1;
- (void)beginMatchingExtensionsWithFirstCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegates;
- (id)electedExtension;
- (id)extensions;
- (id /* block */)firstMatchCompletionBlock;
- (id)init;
- (bool)isClassificationAvailable;
- (id)matchingExtensionToken;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (void)setElectedExtension:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setFirstMatchCompletionBlock:(id /* block */)arg1;
- (void)updateExtensions:(id)arg1 electedExtensions:(id)arg2;

@end
