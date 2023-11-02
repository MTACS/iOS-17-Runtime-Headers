
@interface MUExternalActionPair : NSObject {
    MUGroupedExternalActionController * _actionController;
    NSArray * _viewModels;
}

@property (nonatomic, readonly) MUGroupedExternalActionController *actionController;
@property (nonatomic, readonly) NSArray *viewModels;

- (void).cxx_destruct;
- (id)actionController;
- (id)initWithAction:(id)arg1 actionController:(id)arg2;
- (id)viewModels;

@end
