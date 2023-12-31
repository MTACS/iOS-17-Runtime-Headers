
@interface HMDBulletinCharacteristicTuple : HMFObject {
    bool  _changedByThisDevice;
    NSString * _currentType;
    NSDate * _lastPostingTime;
    NSString * _serviceContextID;
    NSNumber * _targetStateNumber;
    id  _targetValue;
}

@property (nonatomic, readonly) bool changedByThisDevice;
@property (nonatomic, readonly) NSString *currentType;
@property (nonatomic, retain) NSDate *lastPostingTime;
@property (nonatomic, readonly) NSString *serviceContextID;
@property (nonatomic, readonly) NSNumber *targetStateNumber;
@property (nonatomic, readonly) id targetValue;

+ (id)tupleWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 targetStateNumber:(id)arg4 changedByThisDevice:(bool)arg5;

- (void).cxx_destruct;
- (bool)changedByThisDevice;
- (id)currentType;
- (id)initWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 targetStateNumber:(id)arg4 changedByThisDevice:(bool)arg5;
- (id)lastPostingTime;
- (id)serviceContextID;
- (void)setLastPostingTime:(id)arg1;
- (id)targetStateNumber;
- (id)targetValue;
- (void)updatePostingTime;

@end
