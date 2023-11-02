
@protocol CHRecognitionSessionDataSource <NSObject>

@required

- (<CHStrokeProvider> *)strokeProviderSnapshot;

@optional

- (NSData *)dataRepresentationForStrokeIdentifier:(id <CHStrokeIdentifier>)arg1;
- (NSData *)dataRepresentationForStrokeProviderVersion:(id <CHStrokeProviderVersion>)arg1;
- (<CHStrokeIdentifier> *)strokeIdentifierFromData:(NSData *)arg1;
- (<CHStrokeProviderVersion> *)strokeProviderVersionFromData:(NSData *)arg1;

@end
