
@interface DDRVInteractionDelegate : NSObject <DDDetectionControllerInteractionDelegate> {
    RVItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionDidFinish:(id)arg1;
- (void)actionWillStart:(id)arg1;
- (id)initWithItem:(id)arg1;

@end
