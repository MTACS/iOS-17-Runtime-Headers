
@interface PKMockPayLaterCardMagnitudesProvider : NSObject <PKPayLaterCardMagnitudesProvider> {
    PKPayLaterCardMagnitudes * _magnitudes;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPayLaterCardMagnitudes *magnitudes;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (id)magnitudes;
- (void)refreshMagnitudes;
- (void)setMagnitudes:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
