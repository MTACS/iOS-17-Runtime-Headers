
@interface _HUQuickControlContentCharacteristicWriteQueuedUpdate : NSObject {
    NSMutableSet * _affectedCharacteristics;
    <NACancelable> * _cancellationToken;
}

@property (nonatomic, readonly) NSMutableSet *affectedCharacteristics;
@property (nonatomic, readonly) <NACancelable> *cancellationToken;

- (void).cxx_destruct;
- (id)affectedCharacteristics;
- (id)cancellationToken;
- (id)initWithCancellationToken:(id)arg1;

@end
