
@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult {
    NSDictionary * _serializedObjects;
}

@property (nonatomic, readonly) NSDictionary *serializedObjects;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 serializedObjects:(id)arg3 error:(id)arg4;
- (id)serializedObjects;

@end
