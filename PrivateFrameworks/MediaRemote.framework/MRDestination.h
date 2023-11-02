
@interface MRDestination : NSObject <NSCopying, NSSecureCoding> {
    MRAVEndpoint * _endpoint;
    NSString * _outputContextUID;
    NSString * _outputDeviceUID;
    MRPlayerPath * _playerPath;
}

@property (nonatomic, copy) MRClient *client;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) MRAVEndpoint *endpoint;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) bool isProactive;
@property (nonatomic, readonly) bool isUserSelected;
@property (nonatomic, retain) MROrigin *origin;
@property (nonatomic, readonly) NSString *outputContextUID;
@property (nonatomic, retain) NSString *outputDeviceUID;
@property (nonatomic, copy) MRPlayer *player;
@property (nonatomic, copy) MRPlayerPath *playerPath;
@property (nonatomic, readonly) _MRDestinationProtobuf *protobuf;

+ (id)localDestination;
+ (id)proactiveDestination;
+ (bool)supportsSecureCoding;
+ (id)userSelectedDestination;

- (void).cxx_destruct;
- (id)_init;
- (id)client;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (id)initWithOutputContextUID:(id)arg1;
- (id)initWithOutputDeviceUID:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isLocal;
- (bool)isProactive;
- (bool)isUserSelected;
- (id)origin;
- (id)outputContextUID;
- (id)outputDeviceUID;
- (id)player;
- (id)playerPath;
- (void)populatePlayerPathIfNeeded;
- (id)protobuf;
- (void)setClient:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerPath:(id)arg1;

@end
