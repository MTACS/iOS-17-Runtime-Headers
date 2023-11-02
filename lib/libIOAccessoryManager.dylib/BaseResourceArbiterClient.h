
@interface BaseResourceArbiterClient : NSObject {
    <ResourceArbiterClientDelegate> * _delegate;
}

@property (nonatomic) <ResourceArbiterClientDelegate> *delegate;

- (void).cxx_destruct;
- (bool)asynchRequestResourceAccess:(bool)arg1;
- (id)delegate;
- (void)releaseResourceAccess;
- (void)setDelegate:(id)arg1;
- (bool)synchRequestResourceAccess;

@end
