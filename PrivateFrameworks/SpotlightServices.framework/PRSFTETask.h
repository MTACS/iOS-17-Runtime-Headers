
@interface PRSFTETask : NSObject <PRSTriggerTask> {
    id /* block */  _reply;
}

@property (copy) id /* block */ reply;

- (void).cxx_destruct;
- (bool)allowLocation;
- (id)initWithReply:(id /* block */)arg1;
- (bool)needsBag;
- (id /* block */)reply;
- (void)setReply:(id /* block */)arg1;
- (void)triggerQuery:(bool)arg1;

@end
