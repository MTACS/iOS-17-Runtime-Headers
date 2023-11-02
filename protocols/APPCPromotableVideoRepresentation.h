
@protocol APPCPromotableVideoRepresentation <APPCPromotableContentRepresentation>

@required

- (double)bitrate;
- (bool)skipEnabled;
- (double)skipThreshold;
- (bool)unbranded;
- (NSURL *)videoURL;

@end
