
@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload {
    NEIKEv2ConfigurationMessage * _configurationRequest;
}

- (void).cxx_destruct;
- (bool)parsePayloadData;

@end
