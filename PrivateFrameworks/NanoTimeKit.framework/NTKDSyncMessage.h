
@interface NTKDSyncMessage : NSObject <NSSecureCoding, SYChange> {
    NSString * _complicationClientID;
    NSString * _complicationCollectionIdentifier;
    CLKComplicationDescriptor * _complicationDescriptor;
    NSNumber * _complicationFamily;
    NSUUID * _faceUUID;
    NSString * _label;
    long long  _messageType;
    NSData * _payloadData;
    double  _progress;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, copy) NSString *complicationClientID;
@property (nonatomic, copy) NSString *complicationCollectionIdentifier;
@property (nonatomic, copy) CLKComplicationDescriptor *complicationDescriptor;
@property (nonatomic, copy) NSNumber *complicationFamily;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *faceUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long messageType;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, copy) NSData *payloadData;
@property (nonatomic) double progress;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;

+ (id)colorSyncMessageWithData:(id)arg1 domain:(id)arg2;
+ (id)messageOfType:(long long)arg1;
+ (id)messageOfType:(long long)arg1 withCollectionIdentifier:(id)arg2 clientId:(id)arg3;
+ (id)messageOfType:(long long)arg1 withCollectionIdentifier:(id)arg2 clientId:(id)arg3 descriptor:(id)arg4 family:(id)arg5;
+ (id)messageOfType:(long long)arg1 withFaceUUID:(id)arg2;
+ (id)messageTypeDescription:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeType;
- (id)complicationClientID;
- (id)complicationCollectionIdentifier;
- (id)complicationDescriptor;
- (id)complicationFamily;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceUUID;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (long long)messageType;
- (id)objectIdentifier;
- (id)payloadData;
- (double)progress;
- (id)sequencer;
- (void)setComplicationClientID:(id)arg1;
- (void)setComplicationCollectionIdentifier:(id)arg1;
- (void)setComplicationDescriptor:(id)arg1;
- (void)setComplicationFamily:(id)arg1;
- (void)setFaceUUID:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMessageType:(long long)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setProgress:(double)arg1;

@end
