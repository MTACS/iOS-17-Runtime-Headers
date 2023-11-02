
@interface _UITableViewIgnoreDragsTokenImpl : NSObject <_UITableViewIgnoreDragsToken> {
    id /* block */  _didEndHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endIgnoringDrags;
- (id)initWithDidEndHandler:(id /* block */)arg1;

@end
