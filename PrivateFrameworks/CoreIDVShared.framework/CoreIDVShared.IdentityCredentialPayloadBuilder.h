
@interface CoreIDVShared.IdentityCredentialPayloadBuilder : NSObject {
    void cborDataTag;
    void dateProvider;
    void delegate;
    void encoder;
    void identifierStringData;
    void kidRange;
    void randomDataSize;
    void version;
}

- (void).cxx_destruct;
- (id)init;

@end
