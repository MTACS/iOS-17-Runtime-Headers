
@protocol EMMessageContentCachedMetadataDelegate <NSObject>

@required

- (EMMessage *)contentMessage;
- (EMContentRepresentation *)contentRepresentation;

@end
