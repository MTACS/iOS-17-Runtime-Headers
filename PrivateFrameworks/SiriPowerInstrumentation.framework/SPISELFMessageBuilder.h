
@interface SPISELFMessageBuilder : NSObject {
    SISchemaInstrumentationMessage * _eventContextMsg;
    POWSchemaProvisionalPOWClientEvent * _powClientEventMsg;
    POWSchemaProvisionalPOWProcessUsage * _procUsageMsg;
    POWSchemaProvisionalPOWUsage * _usageMsg;
}

@property (nonatomic, retain) SISchemaInstrumentationMessage *eventContextMsg;
@property (nonatomic, retain) POWSchemaProvisionalPOWClientEvent *powClientEventMsg;
@property (nonatomic, retain) POWSchemaProvisionalPOWProcessUsage *procUsageMsg;
@property (nonatomic, retain) POWSchemaProvisionalPOWUsage *usageMsg;

- (void).cxx_destruct;
- (void)addContext:(id)arg1;
- (void)addProcess:(unsigned char)arg1;
- (void)addProcessUsage:(struct SPIResourceUsage { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)addRequestLinkInfoForComponent:(int)arg1 identifier:(id)arg2;
- (id)buildMessage;
- (id)eventContextMsg;
- (id)init;
- (id)powClientEventMsg;
- (id)procUsageMsg;
- (void)setEventContextMsg:(id)arg1;
- (void)setPowClientEventMsg:(id)arg1;
- (void)setProcUsageMsg:(id)arg1;
- (void)setUsageMsg:(id)arg1;
- (id)usageMsg;

@end
