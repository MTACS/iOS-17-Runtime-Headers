
@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload {
    NSArray * _trafficSelectors;
}

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (bool)parsePayloadData;

@end
