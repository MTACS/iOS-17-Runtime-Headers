
@protocol BCOAuth2ResponseProtocol <BCDictionarySerializable>

@required

- (BCError *)error;
- (long long)status;

@end
