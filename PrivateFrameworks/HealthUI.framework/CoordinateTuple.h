
@interface CoordinateTuple : NSObject {
    _HKAnnotatedHorizontalLineBlockCoordinate * _coordinate;
    _HKAnnotatedHorizontalLineBlockCoordinate * _originalCoordinate;
}

@property (nonatomic, retain) _HKAnnotatedHorizontalLineBlockCoordinate *coordinate;
@property (nonatomic, retain) _HKAnnotatedHorizontalLineBlockCoordinate *originalCoordinate;

- (void).cxx_destruct;
- (id)coordinate;
- (id)originalCoordinate;
- (void)setCoordinate:(id)arg1;
- (void)setOriginalCoordinate:(id)arg1;

@end
