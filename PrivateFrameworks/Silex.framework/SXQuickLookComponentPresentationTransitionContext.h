
@interface SXQuickLookComponentPresentationTransitionContext : NSObject <NFStateMachineContextType> {
    SXQuickLookFile * _file;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXQuickLookFile *file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)file;
- (id)initWithFile:(id)arg1;

@end
