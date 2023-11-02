
@interface CAMSalientObjectResult : NSObject <CAMMetadataObjectResult> {
    AVMetadataSalientObject * __salientObject;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) AVMetadataSalientObject *_salientObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *metadataType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long syntheticFocusMode;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_salientObject;
- (id)description;
- (id)initWithSalientObject:(id)arg1;
- (id)metadataType;
- (void)set_salientObject:(id)arg1;
- (unsigned long long)syntheticFocusMode;
- (id)underlyingMetadataObject;
- (id)uniqueIdentifier;

@end
