
@interface PXDataSectionEnablementForwarder : NSObject <PXDataSectionManagerChangeObserver> {
    <PXDataSectionManagerEnabling> * _enablementTarget;
    PXDataSectionManager * _sourceDataSectionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXDataSectionManagerEnabling> *enablementTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXDataSectionManager *sourceDataSectionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateEnablement;
- (id)enablementTarget;
- (id)initWithSourceDataSectionManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setEnablementTarget:(id)arg1;
- (id)sourceDataSectionManager;

@end
