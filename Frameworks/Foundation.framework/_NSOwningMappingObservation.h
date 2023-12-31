
@interface _NSOwningMappingObservation : _NSConcreteObservation <NSObservable, NSOwningObserver> {
    NSObservation * _ownedObservation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setObservation:(id)arg1;

@end
