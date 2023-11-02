
@interface NPKTransientPassAssertion : NPKTransientAssertion {
    bool  _disableCardSelection;
    bool  _requestServiceMode;
    NSString * _uniqueID;
}

@property (nonatomic) bool disableCardSelection;
@property (nonatomic) bool requestServiceMode;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (void)_resyncState;
- (bool)disableCardSelection;
- (id)initWithPassWithUniqueID:(id)arg1;
- (bool)requestServiceMode;
- (void)setDisableCardSelection:(bool)arg1;
- (void)setRequestServiceMode:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;

@end
