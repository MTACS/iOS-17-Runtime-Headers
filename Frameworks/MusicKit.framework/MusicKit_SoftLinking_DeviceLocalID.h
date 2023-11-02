
@interface MusicKit_SoftLinking_DeviceLocalID : NSObject {
    NSString * _databaseID;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *databaseID;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)databaseID;
- (id)description;
- (id)initWithValue:(id)arg1 databaseID:(id)arg2;
- (id)value;

@end
