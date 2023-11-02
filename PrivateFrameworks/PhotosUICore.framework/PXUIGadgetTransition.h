
@interface PXUIGadgetTransition : NSObject <PXGadgetTransition> {
    <PXGridPresentation> * _gridPresentation;
    PXOneUpPresentation * _oneUpPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXGridPresentation> *gridPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXOneUpPresentation *oneUpPresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)gridPresentation;
- (id)initWithOneUpPresentation:(id)arg1 gridPresentation:(id)arg2;
- (id)oneUpPresentation;

@end
