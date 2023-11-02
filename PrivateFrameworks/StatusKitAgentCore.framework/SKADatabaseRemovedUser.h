
@interface SKADatabaseRemovedUser : NSObject {
    NSDate * _dateRemoved;
    NSString * _handle;
    NSString * _presenceIdentifier;
    NSString * _statusTypeIdentifier;
}

@property (nonatomic, readonly) NSDate *dateRemoved;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *presenceIdentifier;
@property (nonatomic, readonly) NSString *statusTypeIdentifier;

- (void).cxx_destruct;
- (id)dateRemoved;
- (id)handle;
- (id)initWithCoreDataRemovedUser:(id)arg1;
- (id)initWithHandle:(id)arg1 statusTypeIdentifier:(id)arg2 presenceIdentifier:(id)arg3 dateRemoved:(id)arg4;
- (id)presenceIdentifier;
- (id)statusTypeIdentifier;

@end
