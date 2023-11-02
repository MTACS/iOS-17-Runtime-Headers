
@interface FigCaptureSessionParsedConfigurationRestrictions : NSObject {
    bool  _allowAllConfigurations;
    NSArray * _allowedConnectionMediaTypes;
    NSArray * _allowedConnectionMetadataIdentifiers;
}

@property (nonatomic, readonly) bool allowAllConfigurations;
@property (nonatomic, readonly) NSArray *allowedConnectionMediaTypes;
@property (nonatomic, readonly) NSArray *allowedConnectionMetadataIdentifiers;

- (bool)allowAllConfigurations;
- (id)allowedConnectionMediaTypes;
- (id)allowedConnectionMetadataIdentifiers;
- (void)dealloc;
- (id)initWithAllowedAVMediaTypes:(id)arg1 clientIsNonStandard:(bool)arg2;
- (id)initWithClientAuditToken:(struct { unsigned int x1[8]; })arg1;

@end
