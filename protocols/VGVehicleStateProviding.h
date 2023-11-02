
@protocol VGVehicleStateProviding <NSObject>

@required

- (void)getStateOfChargeForVehicle:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: VGVehicle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VGVehicleState *, NSError *, void*
- (void)listCarsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
