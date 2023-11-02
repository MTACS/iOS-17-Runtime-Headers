
@interface CAMSubjectGroupResult : NSObject <CAMMetadataObjectResult> {
    long long  __groupID;
    NSArray * _metadataObjects;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) long long _groupID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *metadataObjects;
@property (nonatomic, readonly, copy) NSString *metadataType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long syntheticFocusMode;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (long long)_groupID;
- (id)description;
- (id)initWithMetadataObjects:(id)arg1 groupID:(long long)arg2;
- (id)metadataObjects;
- (id)metadataType;
- (void)set_groupID:(long long)arg1;
- (unsigned long long)syntheticFocusMode;
- (id)underlyingMetadataObject;
- (id)uniqueIdentifier;

@end
