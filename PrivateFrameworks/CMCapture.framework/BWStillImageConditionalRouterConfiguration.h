
@interface BWStillImageConditionalRouterConfiguration : NSObject {
    unsigned int  _numberOfInputs;
    unsigned int  _numberOfOutputs;
    id /* block */  _shouldEmitNodeErrorDecisionProvider;
    id /* block */  _shouldEmitSampleBufferDecisionProvider;
}

@property (nonatomic, readonly) unsigned int numberOfInputs;
@property (nonatomic, readonly) unsigned int numberOfOutputs;
@property (nonatomic, copy) id /* block */ shouldEmitNodeErrorDecisionProvider;
@property (nonatomic, copy) id /* block */ shouldEmitSampleBufferDecisionProvider;

- (void)dealloc;
- (id)initWithNumberOfOutputs:(unsigned int)arg1;
- (unsigned int)numberOfInputs;
- (unsigned int)numberOfOutputs;
- (void)setShouldEmitNodeErrorDecisionProvider:(id /* block */)arg1;
- (void)setShouldEmitSampleBufferDecisionProvider:(id /* block */)arg1;
- (id /* block */)shouldEmitNodeErrorDecisionProvider;
- (id /* block */)shouldEmitSampleBufferDecisionProvider;

@end
