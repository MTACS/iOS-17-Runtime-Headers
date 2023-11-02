
@interface HDDataCollectionObserverState : NSObject <NSCopying> {
    bool  _hasRunningWorkout;
    bool  _isInBackground;
}

@property (nonatomic, readonly) bool hasRunningWorkout;
@property (nonatomic, readonly) bool isInBackground;

+ (id)dataCollectionObserverStateInBackground:(bool)arg1 hasRunningWorkout:(bool)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasRunningWorkout;
- (bool)isEqual:(id)arg1;
- (bool)isInBackground;

@end
