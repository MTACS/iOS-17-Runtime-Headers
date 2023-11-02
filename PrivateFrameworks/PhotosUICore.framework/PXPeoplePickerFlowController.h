
@interface PXPeoplePickerFlowController : NSObject <PXPeopleFlowController> {
    double  _backingScaleFactor;
    NSMutableArray * _bootstrappedSourceUUIDs;
    NSArray * _contexts;
    <PXPeopleFlowDelegate> * _flowDelegate;
    NSArray * _people;
    long long  _viewControllerIndex;
    NSArray * _viewControllers;
}

@property (nonatomic) double backingScaleFactor;
@property (nonatomic, retain) NSMutableArray *bootstrappedSourceUUIDs;
@property (nonatomic, copy) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXPeopleFlowDelegate> *flowDelegate;
@property (nonatomic, readonly) bool hasNextViewController;
@property (nonatomic, readonly) bool hasPreviousViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIBarButtonItem *leftBarButton;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (nonatomic, readonly, copy) NSArray *people;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property (readonly) Class superclass;
@property (nonatomic) long long viewControllerIndex;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, readonly) bool wantsCancelButton;

+ (id)new;

- (void).cxx_destruct;
- (void)_computeViewControllersForPeople:(id)arg1;
- (id)_dataSource;
- (bool)_hasMergeCandidatesForDataSource:(id)arg1 person:(id)arg2;
- (double)backingScaleFactor;
- (id)bootstrappedSourceUUIDs;
- (void)cancel:(id)arg1;
- (id)contexts;
- (void)done:(id)arg1;
- (id)flowDelegate;
- (bool)hasNextViewController;
- (bool)hasPreviousViewController;
- (id)init;
- (id)initWithPeople:(id)arg1;
- (id)initWithPeople:(id)arg1 backingScaleFactor:(double)arg2;
- (id)nextViewController;
- (id)people;
- (id)previousViewController;
- (void)setBackingScaleFactor:(double)arg1;
- (void)setBootstrappedSourceUUIDs:(id)arg1;
- (void)setContexts:(id)arg1;
- (void)setFlowDelegate:(id)arg1;
- (void)setViewControllerIndex:(long long)arg1;
- (void)setViewControllers:(id)arg1;
- (long long)viewControllerIndex;
- (id)viewControllers;

@end
