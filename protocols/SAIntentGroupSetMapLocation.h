
@protocol SAIntentGroupSetMapLocation <SAServerBoundCommand>

@required

- (SAIntentGroupProtobufMessage *)location;
- (void)setLocation:(SAIntentGroupProtobufMessage *)arg1;

@end
