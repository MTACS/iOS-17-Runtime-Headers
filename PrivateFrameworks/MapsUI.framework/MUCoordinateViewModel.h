
@interface MUCoordinateViewModel : MUFactoidViewModel <MUFactoidViewModel> {
    bool  _isUserLocation;
    MKMapItem * _mapItem;
}

@property (nonatomic, readonly) UIColor *darkSymbolColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldReverseForRTLLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *symbolColor;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *titleString;
@property (nonatomic, readonly) NSString *valueString;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)arg1 isUserLocation:(bool)arg2;
- (id)titleString;
- (id)valueString;

@end
