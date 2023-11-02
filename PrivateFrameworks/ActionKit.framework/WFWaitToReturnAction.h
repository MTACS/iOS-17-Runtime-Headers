
@interface WFWaitToReturnAction : WFAction {
    int  _token;
}

@property (nonatomic) int token;

- (void)dealloc;
- (id)disabledOnPlatforms;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setToken:(int)arg1;
- (int)token;

@end
