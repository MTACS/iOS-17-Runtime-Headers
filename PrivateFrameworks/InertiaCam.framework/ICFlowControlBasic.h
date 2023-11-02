
@interface ICFlowControlBasic : NSObject <ICFlowControl> {
    id /* block */  reportProgress;
    id /* block */  shouldBeCanceled;
}

@property (nonatomic, copy) id /* block */ reportProgress;
@property (nonatomic, copy) id /* block */ shouldBeCanceled;

- (void).cxx_destruct;
- (void)ICReportProgress:(float)arg1;
- (bool)ICShouldBeCanceled;
- (id)initWithCancel:(id /* block */)arg1;
- (id)initWithProgress:(id /* block */)arg1;
- (id /* block */)reportProgress;
- (void)setReportProgress:(id /* block */)arg1;
- (void)setShouldBeCanceled:(id /* block */)arg1;
- (id /* block */)shouldBeCanceled;

@end
