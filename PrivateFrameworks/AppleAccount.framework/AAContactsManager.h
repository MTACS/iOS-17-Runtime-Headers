
@interface AAContactsManager : NSObject <AACNContactsManager> {
    <AAContactsIDSStatusDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAContactsIDSStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_predicateForHandle:(id)arg1;
- (id)contactForHandle:(id)arg1;
- (id)contactForMe;
- (id)contactIDForHandle:(id)arg1;
- (id)delegate;
- (void)fetchIDSStatusForHandle:(id)arg1;
- (void)idsStatusForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
