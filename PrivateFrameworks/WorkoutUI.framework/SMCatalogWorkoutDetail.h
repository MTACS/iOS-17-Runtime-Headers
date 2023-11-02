
@interface SMCatalogWorkoutDetail : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workoutDetail;
}

@property (nonatomic, readonly) long long assetLoadStatus;
@property (nonatomic, readonly) long long completedCount;
@property (nonatomic, readonly) NSNumber *mediaTypeRawValue;
@property (nonatomic, readonly) SMCatalogWorkout *workout;

+ (id)canonical;

- (void).cxx_destruct;
- (long long)assetLoadStatus;
- (long long)completedCount;
- (id)init;
- (id)mediaTypeRawValue;
- (id)workout;

@end
