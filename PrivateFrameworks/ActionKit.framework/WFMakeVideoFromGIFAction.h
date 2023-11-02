
@interface WFMakeVideoFromGIFAction : WFAction {
    id /* block */  _cancelBlock;
}

@property (nonatomic, copy) id /* block */ cancelBlock;

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancelBlock;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setCancelBlock:(id /* block */)arg1;

@end
