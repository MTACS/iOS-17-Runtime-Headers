
@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying> {
    bool  _canModifyGroupMembership;
    int  _connectionType;
    _MRAVOutputDeviceDescriptorProtobuf * _designatedGroupLeader;
    struct { 
        unsigned int connectionType : 1; 
        unsigned int canModifyGroupMembership : 1; 
        unsigned int isLocalEndpoint : 1; 
        unsigned int isProxyGroupPlayer : 1; 
    }  _has;
    NSString * _instanceIdentifier;
    bool  _isLocalEndpoint;
    bool  _isProxyGroupPlayer;
    NSString * _name;
    NSMutableArray * _outputDevices;
    NSMutableArray * _personalOutputDevices;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) bool canModifyGroupMembership;
@property (nonatomic) int connectionType;
@property (nonatomic, retain) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader;
@property (nonatomic) bool hasCanModifyGroupMembership;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic, readonly) bool hasDesignatedGroupLeader;
@property (nonatomic, readonly) bool hasInstanceIdentifier;
@property (nonatomic) bool hasIsLocalEndpoint;
@property (nonatomic) bool hasIsProxyGroupPlayer;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, retain) NSString *instanceIdentifier;
@property (nonatomic) bool isLocalEndpoint;
@property (nonatomic) bool isProxyGroupPlayer;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *outputDevices;
@property (nonatomic, retain) NSMutableArray *personalOutputDevices;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (Class)outputDevicesType;
+ (Class)personalOutputDevicesType;

- (void).cxx_destruct;
- (int)StringAsConnectionType:(id)arg1;
- (void)addOutputDevices:(id)arg1;
- (void)addPersonalOutputDevices:(id)arg1;
- (bool)canModifyGroupMembership;
- (void)clearOutputDevices;
- (void)clearPersonalOutputDevices;
- (int)connectionType;
- (id)connectionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)designatedGroupLeader;
- (id)dictionaryRepresentation;
- (bool)hasCanModifyGroupMembership;
- (bool)hasConnectionType;
- (bool)hasDesignatedGroupLeader;
- (bool)hasInstanceIdentifier;
- (bool)hasIsLocalEndpoint;
- (bool)hasIsProxyGroupPlayer;
- (bool)hasName;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (id)instanceIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isLocalEndpoint;
- (bool)isProxyGroupPlayer;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)outputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDevicesCount;
- (id)personalOutputDevices;
- (id)personalOutputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalOutputDevicesCount;
- (bool)readFrom:(id)arg1;
- (void)setCanModifyGroupMembership:(bool)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setDesignatedGroupLeader:(id)arg1;
- (void)setHasCanModifyGroupMembership:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasIsLocalEndpoint:(bool)arg1;
- (void)setHasIsProxyGroupPlayer:(bool)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setIsLocalEndpoint:(bool)arg1;
- (void)setIsProxyGroupPlayer:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)setPersonalOutputDevices:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
