
@protocol BCOAuth2RequestProtocol <BCDictionarySerializable>

@required

- (NSString *)businessIdentifier;
- (<BCBaseOAuth2Protocol> *)oauth2;

@end
