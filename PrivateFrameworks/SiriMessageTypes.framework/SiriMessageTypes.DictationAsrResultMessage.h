
@interface SiriMessageTypes.DictationAsrResultMessage : SiriMessageTypes.RequestMessageBase {
    void resultType;
    void speechPackage;
    void speechTokens;
}

- (void).cxx_destruct;

@end
