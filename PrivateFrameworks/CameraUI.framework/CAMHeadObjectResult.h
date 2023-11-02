
@interface CAMHeadObjectResult : NSObject <CAMMetadataObjectResult> {
    AVMetadataObject * __metadataHeadObject;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) AVMetadataObject *_metadataHeadObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *metadataType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long syntheticFocusMode;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_metadataHeadObject;
- (id)description;
- (id)initWithHeadObject:(id)arg1;
- (id)metadataType;
- (void)set_metadataHeadObject:(id)arg1;
- (unsigned long long)syntheticFocusMode;
- (id)underlyingMetadataObject;
- (id)uniqueIdentifier;

@end
