
@protocol HKWorkoutRouteBuilderServerInterface <HKSeriesBuilderServerInterface>

@required

- (void)remote_finishRouteWithWorkout:(void *)arg1 metadata:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKWorkout *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKWorkoutRoute *, NSError *, void*
- (void)remote_insertRouteData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
