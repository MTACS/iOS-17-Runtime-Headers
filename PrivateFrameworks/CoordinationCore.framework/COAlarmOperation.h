
@interface COAlarmOperation : NSObject {
    MTAlarm * _alarm;
    id /* block */  _completion;
    long long  _type;
}

@property (nonatomic, readonly, copy) MTAlarm *alarm;
@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)alarm;
- (id /* block */)completion;
- (id)initForAdding:(id)arg1 completion:(id /* block */)arg2;
- (id)initForRemoving:(id)arg1 completion:(id /* block */)arg2;
- (id)initForUpdating:(id)arg1 completion:(id /* block */)arg2;
- (bool)performOperationWithMappedAlarms:(id)arg1;
- (long long)type;

@end
