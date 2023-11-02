
@interface WFActionUserInterfaceListener : WFSingleConnectionXPCListener {
    WFActionUserInterface * _actionInterface;
}

@property (nonatomic, readonly) WFActionUserInterface *actionInterface;

- (void).cxx_destruct;
- (id)actionInterface;
- (id)initWithUserInterfaceType:(id)arg1 actionClassName:(id)arg2 classNamesByType:(id)arg3;
- (id)initWithUserInterfaceType:(id)arg1 actionClassName:(id)arg2 classNamesByType:(id)arg3 attribution:(id)arg4;

@end
