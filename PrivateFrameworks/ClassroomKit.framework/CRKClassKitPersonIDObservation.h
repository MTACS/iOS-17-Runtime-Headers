
@interface CRKClassKitPersonIDObservation : NSObject {
    <CRKClassKitFacade> * _classKitFacade;
    <CRKClassKitDataObserver> * _dataObserver;
}

@property (nonatomic, readonly) <CRKClassKitFacade> *classKitFacade;
@property (nonatomic, retain) <CRKClassKitDataObserver> *dataObserver;

- (void).cxx_destruct;
- (void)cancel;
- (id)classKitFacade;
- (id)dataObserver;
- (void)dealloc;
- (id)initWithPersonIDs:(id)arg1 classKitFacade:(id)arg2 block:(id /* block */)arg3;
- (void)setDataObserver:(id)arg1;

@end
